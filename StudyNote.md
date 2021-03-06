#8-25  TinyOS 学习笔记
##同步和异步

###关键词：async
1.使用“async”修饰的命令函数或者事件函数都是异步的，可以抢占当前的执行过程，异步函数调用的命令和触发的事件都应该是异步的

2.所有中断处理程序都是异步的，因此不能调用同步函数。在中断处理程序中，执行同步函数的唯一方法就是发布任务。任务的发布是一个异步操作。

3.使用异步代码容易导致数据的冲突竞争等，在实际编写时尽量使用同步代码，当且仅当该代码的时间要求非常严格时，或者调用该代码片段的的上级代码对时间要求比较严格时，才建议使用异步代码
##原子性代码
1.nesC提供了atomic语句用于保护一小段代码不被抢占
**但是这不意味着atomic语句块不会被抢占，如果两个atomic语句块使用不同的变量，则可以相互抢占**

如：

`command void function1()
{
  atomic
    {
     a++;
     b=a+1;
    }
}   `

`command void function2()
{
  atomic
    {
      c++;
      d=c++;
    }
}  `

**如以上例子所示，function1可以抢占function2不可冒犯的原子性。但是function1不会抢占自身。即包含相同变量的的atomic代码块不能相互抢占执行**
2.如果是异步函数访问该变量，那么这个变量必须得到atomic保护。
3.虽然为了避免数据竞争冲突，可以随便布置atomic代码块，但是：atomic会浪费cpu资源;atomic代码块应该尽量短，使得对中断的延迟少，有利于提高系统的并发性。
4.atomic通常用于转换一个组件的状态变量，如果异步函数要修改一个状态变量，那么必须使用atomic代码块来保证状态转换的原子性。
##makefile学习
###make
“make”是一个可以搜索并解释makefile和MakeFile文件中命令的工具，makefile文件的内容就是定义变量和依赖关系。
###变量
makefile有两个组成部分，即 变量 和 依赖关系。变量的定义如下：
VARNAME=Value   例如把CC变量定义为gcc：CC=gcc   这样就把"gcc"这个字符串赋值给了CC变量，就可以在makefile的其他地方引用该变量了。变量的引用如下：
${VARNAME}   例如：$ {CC}
###依赖关系
依赖关系是makefile的核心内容，依赖关系的格式如下：

`dependecy1：dependencyA dependencyB ... dependencyN`

  `command for dependency1`

**依赖关系中的命令必须以Tab开头，从而使make工具知道这个依赖关系的命令**
上述代码理解如下：dependency1文件生成依赖于dependencyA，dependencyB等文件。而command告诉编译器如何利用这些依赖关系文件产生dependency1。当make工具发现dependency1是建立在dependencyA依赖之上，就会在makefile里查找依赖文件dependencyA的定义。例如：

`myfrogram：mainprog.cc myclass.cc`

  `gcc mainprog.cc myclass.cc`

上述代码理解如下：这是一个makefile文件当输入make命令后，编译系统就会知道要编译生成myprogram文件，紧接着编译系统查看mainprog.cc文件，了解最后一次更改的时间，如果该文件在最后一次编译后有过更新，就执行gcc mainprog.cc myclass.cc 命令。如果没有更新，就查看myclass文件是否更改过，如果更改过，就执行gcc mainprog.cc myclass.cc命令。否则对这条规则不采取任何操作。
###变量和依赖关系的结合
当makefile定义了变量之后，就可以在依赖关系里使用该变量。例如：

`COMPILER = gcc`

`CCFLAGS = -g`

`myprogram:mainprog.cc subfile.o myclass.o`

`  ${COMIPLER}${CCFLAGS}mainprog.cc subfile.o myclass.o`

**为了能够清除掉某些编译生成的文件，只需要在makefile中增加一个新的依赖关系，即clean依赖关系代码如下：**

`clean:`

`  rm -rf *.o a.out`

当执行`make clean`命令时，会移除所有已经生成的目标文件和可执行文件。
###编写makefile文件
tinyos的makefile文件最简形式如下

`COMPONENT=TopLevelComponent`  //指明顶层配件，从这里开始编译程序

`include $(MAKERULES)`         //包含nesc的编译规则

Tinyos应用程序一般给nesC编译器指明一些参数选项，用以创建一些额外的文件。以app/RadioCountToLeds程序为例，分析它的makefile文件RadioCountToLeds的makefile使用MIG工具生成一些文件来描述信息的结构，也是用了python工具和java工具。

`COMPONENT=RadioCountToLedsAppC`

`BUILD_EXTRAL_DEPS=RadioCountMsg.py RadioCountMsg.class`

`RadioCountMsg.py:RadioCountToLeds.h`

`  MIG python -target=$(PLATFORM)$(CFLAGS) -python-calssname=RadioCountMsg`

`RadioCountToLeds.h RadioCountMSG -o $@`

`RadioCountMSG.calss:RadioCountMsg.java`

`  javac RadioCountMsg.java`

`RadioCountMsg.java:RadioCountMsg.h`

`  MIG java -target=$(PLATFORM)$(CFLAGS) -java-classname=RadioCountMsg`

`RadioCountToLeds.h RadioCountMsg -o $@`

`include $(MAKERULES)`

1.上述代码的第一行和最后一行是所有tinyos程序的makefile的基本格式，最后一行包含tinyos编译系统的路径（/support/make）
2.上述代码第二行指明除了生成目标文件外还要生成额外的文件mZ3.根据当前编写的Makefile文件外这些生成的文件不会被“make clean”命令清除掉。为此，为此可以增加以下命令到makefile中：

`CLEAN_EXTRAL=$(BUILD_EXTRAL_DEPS)RadioCountMsg.java`

CLEAN\_EXTRAL定义的变量除了BUILD\_EXTRAL\_DEPS定义的变量外还追加了RadioCountMsg.java 这样当执行make clean命令后就会删除CLEAN\_EXTRAL指名的文件

3.可以修改RadioCountToLeds的源码使用预处理符号SEND\_PERIOD设定消息的发送周期

`call MilliTimer.startPeriodic(SEND_PERIOD)`

并将以下代码添加到MakeFile中

`CFLAGS+=-D SEND_PERIOD=2000`

**CFLAGS选项的定义使用‘+=’符号，也可以在调用make命令时传递该参数选项给nesc编译器**


