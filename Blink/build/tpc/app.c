#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/include/stddef.h" 3
typedef int ptrdiff_t;
#line 213
typedef unsigned int size_t;
#line 325
typedef unsigned int wchar_t;
# 8 "/usr/lib/x86_64-linux-gnu/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 41 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/stdint.h" 3
typedef signed char int8_t;
typedef unsigned char uint8_t;




typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;
#line 67
typedef int16_t int_least16_t;
typedef uint16_t uint_least16_t;










typedef signed long int32_t;
typedef unsigned long uint32_t;
#line 97
typedef int32_t int_least32_t;
typedef uint32_t uint_least32_t;
#line 119
typedef signed long long int64_t;
typedef unsigned long long uint64_t;








typedef int64_t int_least64_t;
typedef uint64_t uint_least64_t;
#line 159
typedef signed int int_fast8_t;
typedef unsigned int uint_fast8_t;




typedef signed int int_fast16_t;
typedef unsigned int uint_fast16_t;




typedef signed int int_fast32_t;
typedef unsigned int uint_fast32_t;
#line 213
typedef int_least64_t int_fast64_t;
typedef uint_least64_t uint_fast64_t;







typedef long long int intmax_t;








typedef long long unsigned int uintmax_t;
#line 243
typedef signed int intptr_t;
typedef unsigned int uintptr_t;
# 273 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/inttypes.h" 3
#line 270
typedef struct __nesc_unnamed4242 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 431 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 25 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int8_t;
typedef unsigned char __uint8_t;








typedef signed short __int16_t;
typedef unsigned short __uint16_t;








typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;










typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#line 75
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
#line 98
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
# 6 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 16 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/sys/_types.h" 3
typedef long _off_t;







typedef short __dev_t;




typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ 
#line 36
typedef long long _off64_t;







typedef long _fpos_t;
#line 56
typedef int _ssize_t;
# 354 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/include/stddef.h" 3
typedef unsigned int wint_t;
# 75 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/sys/_types.h" 3
#line 67
typedef struct __nesc_unnamed4243 {

  int __count;
  union __nesc_unnamed4244 {

    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;
# 21 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 37
struct _reent;






struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
  void *_fnargs[32];
  void *_dso_handle[32];

  __ULong _fntypes;


  __ULong _is_cxa;
};









struct _atexit {
  struct _atexit *_next;
  int _ind;

  void (*_fns[32])(void );
  struct _on_exit_args _on_exit_args;
};









struct __sbuf {
  unsigned char *_base;
  int _size;
};
#line 169
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void *_cookie;

  int (*_read)(struct _reent *arg_0x2b95c9c42540, void *arg_0x2b95c9c427e0, char *arg_0x2b95c9c42a80, int arg_0x2b95c9c42ce8);

  int (*_write)(struct _reent *arg_0x2b95c9c41418, void *arg_0x2b95c9c416b8, const char *arg_0x2b95c9c41990, int arg_0x2b95c9c41bf8);

  _fpos_t (*_seek)(struct _reent *arg_0x2b95c9c40378, void *arg_0x2b95c9c40618, _fpos_t arg_0x2b95c9c408c8, int arg_0x2b95c9c40b30);
  int (*_close)(struct _reent *arg_0x2b95c9c46290, void *arg_0x2b95c9c46530);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
#line 273
typedef struct __sFILE __FILE;



struct _glue {

  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
#line 305
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
#line 580
struct _reent {

  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x2b95c9c4e568);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4245 {

    struct __nesc_unnamed4246 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
      _mbstate_t _mblen_state;
      _mbstate_t _mbtowc_state;
      _mbstate_t _wctomb_state;
      char _l64a_buf[8];
      char _signal_buf[24];
      int _getdate_err;
      _mbstate_t _mbrlen_state;
      _mbstate_t _mbrtowc_state;
      _mbstate_t _mbsrtowcs_state;
      _mbstate_t _wcrtomb_state;
      _mbstate_t _wcsrtombs_state;
      int _h_errno;
    } _reent;



    struct __nesc_unnamed4247 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x2b95c9c56b30);




  struct _glue __sglue;
  __FILE __sf[3];
};
#line 818
struct _reent;
struct _reent;
# 26 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/string.h" 3
void *memset(void *arg_0x2b95c9c66868, int arg_0x2b95c9c66ad0, size_t arg_0x2b95c9c66d78);
# 33 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/stdlib.h" 3
#line 29
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;





#line 35
typedef struct __nesc_unnamed4249 {

  long quot;
  long rem;
} ldiv_t;






#line 42
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
# 14 "/home/wangqi/ARM_CROSS_/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/4.7.4/../../../../arm-none-eabi/include/math.h" 3
union __dmath {

  double d;
  __ULong i[2];
};

union __fmath {

  float f;
  __ULong i[1];
};


union __ldmath {

  long double ld;
  __ULong i[4];
};
#line 145
typedef float float_t;
typedef double double_t;
#line 496
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 551
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4251 {
#line 32
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 43
struct __nesc_attr_atleastonce {
};
#line 44
struct __nesc_attr_exactlyonce {
};
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4252 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;
# 11 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/stm32const.h"
typedef unsigned char const prog_uchar;
typedef uint8_t const prog_uint8_t;
typedef uint16_t const prog_uint16_t;
typedef uint32_t const prog_uint32_t;
typedef uint64_t const prog_uint64_t;

typedef char const prog_char;
typedef int8_t const prog_int8_t;
typedef int16_t const prog_int16_t;
typedef int32_t const prog_int32_t;
typedef int64_t const prog_int64_t;

typedef void const prog_void;

typedef prog_uint8_t const_uint8_t;
typedef prog_uint16_t const_uint16_t;
typedef prog_uint32_t const_uint32_t;
typedef prog_int8_t const_int8_t;
typedef prog_int16_t const_int16_t;
typedef prog_int32_t const_int32_t;
# 536 "/home/wangqi/platforms2013/tinyos-main/../3rd_party/libopencm3/include/libopencm3/stm32/f1/rcc.h"
enum rcc_osc {
  PLL, PLL2, PLL3, HSE, HSI, LSE, LSI
};







enum rcc_periph_clken {


  RCC_DMA1 = (0x14 << 5) + 0, 
  RCC_DMA2 = (0x14 << 5) + 1, 
  RCC_SRAM = (0x14 << 5) + 2, 
  RCC_FLTF = (0x14 << 5) + 4, 
  RCC_CRC = (0x14 << 5) + 6, 
  RCC_FSMC = (0x14 << 5) + 8, 
  RCC_SDIO = (0x14 << 5) + 10, 
  RCC_OTGFS = (0x14 << 5) + 12, 
  RCC_ETHMAC = (0x14 << 5) + 14, 
  RCC_ETHMACTX = (0x14 << 5) + 15, 
  RCC_ETHMACRX = (0x14 << 5) + 16, 


  RCC_AFIO = (0x18 << 5) + 0, 
  RCC_GPIOA = (0x18 << 5) + 2, 
  RCC_GPIOB = (0x18 << 5) + 3, 
  RCC_GPIOC = (0x18 << 5) + 4, 
  RCC_GPIOD = (0x18 << 5) + 5, 
  RCC_GPIOE = (0x18 << 5) + 6, 
  RCC_GPIOF = (0x18 << 5) + 7, 
  RCC_GPIOG = (0x18 << 5) + 8, 
  RCC_ADC1 = (0x18 << 5) + 9, 
  RCC_ADC2 = (0x18 << 5) + 10, 
  RCC_TIM1 = (0x18 << 5) + 11, 
  RCC_SPI1 = (0x18 << 5) + 12, 
  RCC_TIM8 = (0x18 << 5) + 13, 
  RCC_USART1 = (0x18 << 5) + 14, 
  RCC_ADC3 = (0x18 << 5) + 15, 
  RCC_TIM15 = (0x18 << 5) + 16, 
  RCC_TIM16 = (0x18 << 5) + 17, 
  RCC_TIM17 = (0x18 << 5) + 18, 
  RCC_TIM9 = (0x18 << 5) + 19, 
  RCC_TIM10 = (0x18 << 5) + 20, 
  RCC_TIM11 = (0x18 << 5) + 21, 


  RCC_TIM2 = (0x1C << 5) + 0, 
  RCC_TIM3 = (0x1C << 5) + 1, 
  RCC_TIM4 = (0x1C << 5) + 2, 
  RCC_TIM5 = (0x1C << 5) + 3, 
  RCC_TIM6 = (0x1C << 5) + 4, 
  RCC_TIM7 = (0x1C << 5) + 5, 
  RCC_TIM12 = (0x1C << 5) + 6, 
  RCC_TIM13 = (0x1C << 5) + 7, 
  RCC_TIM14 = (0x1C << 5) + 8, 
  RCC_WWDG = (0x1C << 5) + 11, 
  RCC_SPI2 = (0x1C << 5) + 14, 
  RCC_SPI3 = (0x1C << 5) + 15, 
  RCC_USART2 = (0x1C << 5) + 17, 
  RCC_USART3 = (0x1C << 5) + 18, 
  RCC_UART4 = (0x1C << 5) + 19, 
  RCC_UART5 = (0x1C << 5) + 20, 
  RCC_I2C1 = (0x1C << 5) + 21, 
  RCC_I2C2 = (0x1C << 5) + 22, 
  RCC_USB = (0x1C << 5) + 23, 
  RCC_CAN = (0x1C << 5) + 25, 
  RCC_CAN1 = (0x1C << 5) + 25, 
  RCC_CAN2 = (0x1C << 5) + 26, 
  RCC_BKP = (0x1C << 5) + 27, 
  RCC_PWR = (0x1C << 5) + 28, 
  RCC_DAC = (0x1C << 5) + 29, 
  RCC_CEC = (0x1C << 5) + 30
};

enum rcc_periph_rst {


  RST_OTGFS = (0x28 << 5) + 12, 
  RST_ETHMAC = (0x28 << 5) + 14, 


  RST_AFIO = (0x0c << 5) + 0, 
  RST_GPIOA = (0x0c << 5) + 2, 
  RST_GPIOB = (0x0c << 5) + 3, 
  RST_GPIOC = (0x0c << 5) + 4, 
  RST_GPIOD = (0x0c << 5) + 5, 
  RST_GPIOE = (0x0c << 5) + 6, 
  RST_GPIOF = (0x0c << 5) + 7, 
  RST_GPIOG = (0x0c << 5) + 8, 
  RST_ADC1 = (0x0c << 5) + 9, 
  RST_ADC2 = (0x0c << 5) + 10, 
  RST_TIM1 = (0x0c << 5) + 11, 
  RST_SPI1 = (0x0c << 5) + 12, 
  RST_TIM8 = (0x0c << 5) + 13, 
  RST_USART1 = (0x0c << 5) + 14, 
  RST_ADC3 = (0x0c << 5) + 15, 
  RST_TIM15 = (0x0c << 5) + 16, 
  RST_TIM16 = (0x0c << 5) + 17, 
  RST_TIM17 = (0x0c << 5) + 18, 
  RST_TIM9 = (0x0c << 5) + 19, 
  RST_TIM10 = (0x0c << 5) + 20, 
  RST_TIM11 = (0x0c << 5) + 21, 


  RST_TIM2 = (0x10 << 5) + 0, 
  RST_TIM3 = (0x10 << 5) + 1, 
  RST_TIM4 = (0x10 << 5) + 2, 
  RST_TIM5 = (0x10 << 5) + 3, 
  RST_TIM6 = (0x10 << 5) + 4, 
  RST_TIM7 = (0x10 << 5) + 5, 
  RST_TIM12 = (0x10 << 5) + 6, 
  RST_TIM13 = (0x10 << 5) + 7, 
  RST_TIM14 = (0x10 << 5) + 8, 
  RST_WWDG = (0x10 << 5) + 11, 
  RST_SPI2 = (0x10 << 5) + 14, 
  RST_SPI3 = (0x10 << 5) + 15, 
  RST_USART2 = (0x10 << 5) + 17, 
  RST_USART3 = (0x10 << 5) + 18, 
  RST_UART4 = (0x10 << 5) + 19, 
  RST_UART5 = (0x10 << 5) + 20, 
  RST_I2C1 = (0x10 << 5) + 21, 
  RST_I2C2 = (0x10 << 5) + 22, 
  RST_USB = (0x10 << 5) + 23, 
  RST_CAN = (0x10 << 5) + 24, 
  RST_CAN1 = (0x10 << 5) + 24, 
  RST_CAN2 = (0x10 << 5) + 25, 
  RST_BKP = (0x10 << 5) + 27, 
  RST_PWR = (0x10 << 5) + 28, 
  RST_DAC = (0x10 << 5) + 29, 
  RST_CEC = (0x10 << 5) + 30
};
# 64 "/home/wangqi/platforms2013/tinyos-main/../3rd_party/libopencm3/include/libopencm3/stm32/common/exti_common_all.h"
enum exti_trigger_type {
  EXTI_TRIGGER_RISING, 
  EXTI_TRIGGER_FALLING, 
  EXTI_TRIGGER_BOTH
};
# 99 "/home/wangqi/platforms2013/tinyos-main/../3rd_party/libopencm3/include/libopencm3/stm32/f1/nvic.h"
void __attribute((interrupt)) rtc_isr(void );
# 145 "/home/wangqi/platforms2013/tinyos-main/../3rd_party/libopencm3/include/libopencm3/stm32/f1/rtc.h"
#line 143
typedef enum __nesc_unnamed4253 {
  RTC_SEC, RTC_ALR, RTC_OW
} rtcflag_t;
# 417 "/home/wangqi/platforms2013/tinyos-main/../3rd_party/libopencm3/include/libopencm3/cm3/scb.h"
struct scb_exception_stack_frame {
  uint32_t r0;
  uint32_t r1;
  uint32_t r2;
  uint32_t r3;
  uint32_t r12;
  uint32_t lr;
  uint32_t pc;
  uint32_t xpsr;
} __attribute((packed)) ;
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/stm32hardware.h"
typedef uint32_t __nesc_atomic_t;
#line 104
static __inline __nesc_atomic_t __nesc_atomic_start(void ) __attribute((always_inline)) ;
#line 133
static __inline void __nesc_atomic_end(__nesc_atomic_t oldState) __attribute((always_inline)) ;
#line 163
static __inline void __nesc_enable_interrupt() __attribute((always_inline)) ;
#line 190
static __inline void __nesc_disable_interrupt() __attribute((always_inline)) ;
#line 219
typedef uint8_t mcu_power_t  ;
#line 272
static inline void __nesc_nvic_set_priority(uint8_t irqn, uint8_t priority);
# 43 "/home/wangqi/platforms2013/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4254 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 22 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/clock/stm32_systick.h"
typedef struct T1hz {
} 
#line 22
T1hz;
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4255 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4256 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4257 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4258 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
typedef TMicro Stm32SysTickP__BusyWait__precision_tag;
typedef uint16_t Stm32SysTickP__BusyWait__size_type;
typedef T1hz Stm32SysTickP__SysUpTimeCounter__precision_tag;
typedef uint32_t Stm32SysTickP__SysUpTimeCounter__size_type;
typedef TMilli Max706P__TimerWD__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMicro STM32RtcC__BusyWait__precision_tag;
typedef uint16_t STM32RtcC__BusyWait__size_type;
typedef TMilli STM32RtcC__LocalTime__precision_tag;
typedef TMilli STM32RtcC__Alarm__precision_tag;
typedef uint32_t STM32RtcC__Alarm__size_type;
typedef TMilli STM32RtcC__Counter__precision_tag;
typedef uint32_t STM32RtcC__Counter__size_type;
typedef TMilli BlinkC__Timer0__precision_tag;
typedef TMilli BlinkC__Timer1__precision_tag;
typedef TMilli BlinkC__Timer2__precision_tag;
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
# 76 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t McuSleepC__McuSleepInit__init(void );
#line 62
static error_t Stm32ClockP__ClockInit__init(void );
#line 62
static error_t Stm32SysTickP__Init__init(void );
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__toggle(void );



static void /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__makeOutput(void );
#line 42
static void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__toggle(void );



static void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__makeOutput(void );
#line 40
static void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__set(void );

static void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__toggle(void );



static void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__makeOutput(void );
#line 40
static void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__set(void );

static void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__toggle(void );



static void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__makeOutput(void );
#line 40
static void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__set(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void Max706P__wd_task__runTask(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void Max706P__Boot__booted(void );
#line 60
static void Max706P__Reflush__booted(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t Max706P__Init__init(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void Max706P__TimerWD__fired(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b95ca40ee48);
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b95ca40ee48, 
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__stop(void );
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static STM32RtcC__Alarm__size_type STM32RtcC__Alarm__getNow(void );
#line 103
static void STM32RtcC__Alarm__startAt(STM32RtcC__Alarm__size_type t0, STM32RtcC__Alarm__size_type dt);
#line 116
static STM32RtcC__Alarm__size_type STM32RtcC__Alarm__getAlarm(void );
#line 73
static void STM32RtcC__Alarm__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t STM32RtcC__Init__init(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void STM32RtcC__Counter__default__overflow(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 83
static void LedsP__Leds__led1Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b95c9f66108);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b95c9f66108);
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__fired(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void BlinkC__Boot__booted(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void BlinkC__computeTask__runTask(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__fired(void );
#line 83
static void BlinkC__Timer2__fired(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__SysTickInit__init(void );
#line 62
static error_t PlatformP__Max706Init__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuSleepInit__init(void );
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/McuSleepC.nc"
static inline error_t McuSleepC__McuSleepInit__init(void );
#line 76
static inline void McuSleepC__McuSleep__sleep(void );
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/clock/Stm32ClockP.nc"
static inline error_t Stm32ClockP__ClockInit__init(void );
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/clock/Stm32SysTickP.nc"
static inline error_t Stm32SysTickP__Init__init(void );
# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static __inline void /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__toggle(void ) __attribute((always_inline)) ;
#line 56
static inline void /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__makeOutput(void ) __attribute((always_inline)) ;
#line 24
static inline void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__set(void ) __attribute((always_inline)) ;







static __inline void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__toggle(void ) __attribute((always_inline)) ;
#line 56
static inline void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__makeOutput(void ) __attribute((always_inline)) ;
#line 24
static inline void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__set(void ) __attribute((always_inline)) ;







static __inline void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__toggle(void ) __attribute((always_inline)) ;
#line 56
static inline void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__makeOutput(void ) __attribute((always_inline)) ;
#line 24
static inline void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__set(void ) __attribute((always_inline)) ;







static __inline void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__toggle(void ) __attribute((always_inline)) ;
#line 56
static inline void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__makeOutput(void ) __attribute((always_inline)) ;
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t Max706P__wd_task__postTask(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void Max706P__TimerWD__startPeriodic(uint32_t dt);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void Max706P__WDI__toggle(void );



static void Max706P__WDI__makeOutput(void );
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/max706/Max706P.nc"
enum Max706P____nesc_unnamed4259 {
#line 40
  Max706P__wd_task = 0U
};
#line 40
typedef int Max706P____nesc_sillytask_wd_task[Max706P__wd_task];
#line 18
static inline error_t Max706P__Init__init(void );









static inline void Max706P__Reflush__booted(void );





static inline void Max706P__Boot__booted(void );





static inline void Max706P__wd_task__runTask(void );





static inline void Max706P__TimerWD__fired(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b95ca40ee48);
#line 71
enum /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0____nesc_unnamed4260 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0____nesc_unnamed4261 {

  VirtualizeTimerC__0__NUM_TIMERS = 4U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0____nesc_unnamed4262 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 204
static inline void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0____nesc_unnamed4263 {
#line 74
  AlarmToTimerC__0__fired = 2U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__stop(void );


static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__getNow(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void STM32RtcC__Alarm__fired(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void STM32RtcC__Counter__overflow(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void STM32RtcC__WatchDogReflush__booted(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
uint32_t STM32RtcC__alarm;
#line 101
static __inline void STM32RtcC__setRtcAlarm(uint32_t AlarmValue);










static __inline void STM32RtcC__enableInterrupt(void );
#line 125
static __inline void STM32RtcC__disableInterrupt(void );
#line 165
static inline error_t STM32RtcC__Init__init(void );
#line 235
static inline void STM32RtcC__Alarm__stop(void );










static void STM32RtcC__Alarm__startAt(uint32_t t0, uint32_t dt);
#line 267
static uint32_t STM32RtcC__Alarm__getNow(void );
#line 279
static inline uint32_t STM32RtcC__Alarm__getAlarm(void );
#line 308
static inline void STM32RtcC__Counter__default__overflow(void );






void rtc_isr(void )   ;
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 17 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 31
static inline void LedsP__Leds__led0Toggle(void );








static inline void LedsP__Leds__led1Toggle(void );








static inline void LedsP__Leds__led2Toggle(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b95c9f66108);
# 76 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4264 {

  SchedulerBasicP__NUM_TASKS = 4U, 
  SchedulerBasicP__NO_TASK = 255
};
#line 104
#line 83
typedef struct SchedulerBasicP____nesc_unnamed4265 {
  uint8_t m_padding[128];
  uint8_t m_head;
  uint8_t m_tail;
#line 102
  uint8_t m_next[SchedulerBasicP__NUM_TASKS];
  uint8_t m_padding2[128];
} SchedulerBasicP__m_taskInfo_t;

SchedulerBasicP__m_taskInfo_t SchedulerBasicP__m_taskInfo;








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 143
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 228
static inline void SchedulerBasicP__Scheduler__init(void );
#line 246
static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 261
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 282
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__startPeriodic(uint32_t dt);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t BlinkC__computeTask__postTask(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__startPeriodic(uint32_t dt);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
static void BlinkC__Leds__led0Toggle(void );
#line 83
static void BlinkC__Leds__led1Toggle(void );
#line 100
static void BlinkC__Leds__led2Toggle(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer2__startPeriodic(uint32_t dt);
# 66 "BlinkC.nc"
enum BlinkC____nesc_unnamed4266 {
#line 66
  BlinkC__computeTask = 3U
};
#line 66
typedef int BlinkC____nesc_sillytask_computeTask[BlinkC__computeTask];
#line 60
static inline void BlinkC__Boot__booted(void );





static void BlinkC__computeTask__runTask(void );





static inline void BlinkC__Timer0__fired(void );






static inline void BlinkC__Timer1__fired(void );





static inline void BlinkC__Timer2__fired(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void STM32RtcC__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 143 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_taskInfo.m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_taskInfo.m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (id >= SchedulerBasicP__NUM_TASKS) {
#line 163
      return FALSE;
    }
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_taskInfo.m_head == SchedulerBasicP__NO_TASK) 
        {
          if (SchedulerBasicP__m_taskInfo.m_next[id] != SchedulerBasicP__NO_TASK) {




              return FALSE;
            }
          SchedulerBasicP__m_taskInfo.m_head = id;
          SchedulerBasicP__m_taskInfo.m_tail = id;
        }
      else 
        {
          if (SchedulerBasicP__m_taskInfo.m_tail < SchedulerBasicP__NUM_TASKS) {
              if (SchedulerBasicP__m_taskInfo.m_next[id] != SchedulerBasicP__NO_TASK) {




                  return FALSE;
                }
              SchedulerBasicP__m_taskInfo.m_next[SchedulerBasicP__m_taskInfo.m_tail] = id;
              SchedulerBasicP__m_taskInfo.m_tail = id;
            }
          else 
#line 191
            {
#line 214
              return FALSE;
            }
        }



      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 308 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
static inline void STM32RtcC__Counter__default__overflow(void )
#line 308
{
  return;
}

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void STM32RtcC__Counter__overflow(void ){
#line 82
  STM32RtcC__Counter__default__overflow();
#line 82
}
#line 82
# 228 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_taskInfo.m_next, SchedulerBasicP__NO_TASK, sizeof  SchedulerBasicP__m_taskInfo.m_next);
    SchedulerBasicP__m_taskInfo.m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_taskInfo.m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/McuSleepC.nc"
static inline error_t McuSleepC__McuSleepInit__init(void )
#line 57
{
#line 70
  * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0D00 + 0x10) = 1 << 4;

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__McuSleepInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuSleepC__McuSleepInit__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__set(void )
#line 24
{
  * (volatile uint32_t *)(1073810432U + 0x10) = 1UL << 0;
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__set();
#line 40
}
#line 40
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__makeOutput(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {

    * (volatile uint32_t *)((uintptr_t )1073810432U + ((0 & 0x08) >> 1)) = (* (volatile uint32_t *)((uintptr_t )1073810432U + ((0 & 0x08) >> 1)) & ~(0x0FUL << ((0 & 0x07) << 2)))
     | ((uint32_t )(((0x00 & 0x3) << 2) | (0x01 & 0x3)) << ((0 & 0x07) << 2));
  }
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__makeOutput();
#line 46
}
#line 46
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__set(void )
#line 24
{
  * (volatile uint32_t *)(1073810432U + 0x10) = 1UL << 1;
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__set();
#line 40
}
#line 40
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__makeOutput(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {

    * (volatile uint32_t *)((uintptr_t )1073810432U + ((1 & 0x08) >> 1)) = (* (volatile uint32_t *)((uintptr_t )1073810432U + ((1 & 0x08) >> 1)) & ~(0x0FUL << ((1 & 0x07) << 2)))
     | ((uint32_t )(((0x00 & 0x3) << 2) | (0x01 & 0x3)) << ((1 & 0x07) << 2));
  }
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__makeOutput();
#line 46
}
#line 46
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__set(void )
#line 24
{
  * (volatile uint32_t *)(1073810432U + 0x10) = 1UL << 2;
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__set();
#line 40
}
#line 40
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__makeOutput(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {

    * (volatile uint32_t *)((uintptr_t )1073810432U + ((2 & 0x08) >> 1)) = (* (volatile uint32_t *)((uintptr_t )1073810432U + ((2 & 0x08) >> 1)) & ~(0x0FUL << ((2 & 0x07) << 2)))
     | ((uint32_t )(((0x00 & 0x3) << 2) | (0x01 & 0x3)) << ((2 & 0x07) << 2));
  }
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__makeOutput();
#line 46
}
#line 46
# 17 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 17
{

  LedsP__Led0__makeOutput();
  LedsP__Led0__set();
  LedsP__Led1__makeOutput();
  LedsP__Led1__set();
  LedsP__Led2__makeOutput();
  LedsP__Led2__set();
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static __inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__toggle(void )
#line 32
{







  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073809408U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073809408U + 0x0c) & 0xfff00000)) | 0x02000000) + (3 << 2)) = ! * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073809408U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073809408U + 0x0c) & 0xfff00000)) | 0x02000000) + (3 << 2));
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void Max706P__WDI__toggle(void ){
#line 42
  /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__toggle();
#line 42
}
#line 42
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__makeOutput(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {

    * (volatile uint32_t *)((uintptr_t )1073809408U + ((3 & 0x08) >> 1)) = (* (volatile uint32_t *)((uintptr_t )1073809408U + ((3 & 0x08) >> 1)) & ~(0x0FUL << ((3 & 0x07) << 2)))
     | ((uint32_t )(((0x00 & 0x3) << 2) | (0x01 & 0x3)) << ((3 & 0x07) << 2));
  }
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void Max706P__WDI__makeOutput(void ){
#line 46
  /*HplStm32GeneralIOC.PortA.Bit3*/HplStm32GeneralIOPinP__3__IO__makeOutput();
#line 46
}
#line 46
# 18 "/home/wangqi/platforms2013/tinyos-main/tos/chips/max706/Max706P.nc"
static inline error_t Max706P__Init__init(void )
#line 18
{

  Max706P__WDI__makeOutput();
  Max706P__WDI__toggle();



  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__Max706Init__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Max706P__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/clock/Stm32SysTickP.nc"
static inline error_t Stm32SysTickP__Init__init(void )
#line 23
{
  * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0010 + 0x00) = 0;
  * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0010 + 0x08) = 1;
  * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0010 + 0x04) = (8000000U / ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U)) - 1) & 0x00FFFFFFUL;





  * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0010 + 0x00) = (1 << 2) | (1 << 0);

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__SysTickInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Stm32SysTickP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/clock/Stm32ClockP.nc"
static inline error_t Stm32ClockP__ClockInit__init(void )
#line 47
{


  * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x00) = (((8000000U / ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U)) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U)) - 8000000U + 40000U / 2) / 40000U + 16U) << 3) | (1 << 0);
  * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x04) = (0 * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << 0)) + (0 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 1))) + ((0 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 2))) + (0 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 2 + 1)))) + ((0 + 4) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 4))) + (0 + 4 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 4 + 1))) + ((0 + 4 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 4 + 2))) + (0 + 4 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 4 + 2 + 1))))) + ((0 + 8) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8))) + (0 + 8 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 1))) + ((0 + 8 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 2))) + (0 + 8 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 2 + 1)))) + ((0 + 8 + 4) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 4))) + (0 + 8 + 4 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 4 + 1))) + ((0 + 8 + 4 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 4 + 2))) + (0 + 8 + 4 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 8 + 4 + 2 + 1)))))) + ((0 + 16) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16))) + (0 + 16 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 1))) + ((0 + 16 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 2))) + (0 + 16 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 2 + 1)))) + ((0 + 16 + 4) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 4))) + (0 + 16 + 4 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 4 + 1))) + ((0 + 16 + 4 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 4 + 2))) + (0 + 16 + 4 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 4 + 2 + 1))))) + ((0 + 16 + 8) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8))) + (0 + 16 + 8 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 1))) + ((0 + 16 + 8 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 2))) + (0 + 16 + 8 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 2 + 1)))) + ((0 + 16 + 8 + 4) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 4))) + (0 + 16 + 8 + 4 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 4 + 1))) + ((0 + 16 + 8 + 4 + 2) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 4 + 2))) + (0 + 16 + 8 + 4 + 2 + 1) * ((8000000U + 4 * 1000000U / 2) / (4 * 1000000U) == (1 << (0 + 16 + 8 + 4 + 2 + 1))))))) + 7) << 4;




  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Stm32ClockP__ClockInit__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 47
{


  do {
#line 50
      * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0D00 + 0x0C) = (0x05FA << 16) | (0x7 << 8);
    }
  while (
#line 50
  0);


  PlatformP__MoteClockInit__init();
  PlatformP__SysTickInit__init();




  * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18) = ((((1 << 0) | (1 << 2)) | (1 << 3)) | (1 << 4)) | (1 << 5);










  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0000 + 0x04) = (0x2 << 24) | (0x1 << 4);






  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18) & 0xfff00000)) | 0x02000000) + (0 << 2)) = 0;
#line 107
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0800 + 0x00) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0800 + 0x04) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0c00 + 0x00) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0c00 + 0x04) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x1000 + 0x00) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x1000 + 0x04) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x1400 + 0x00) = 0;
  * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x1400 + 0x04) = 0;


  PlatformP__Max706Init__init();
  PlatformP__LedsInit__init();
  PlatformP__McuSleepInit__init();

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 101 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
static __inline void STM32RtcC__setRtcAlarm(uint32_t AlarmValue)
{

  do {
#line 104
      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (4 << 2)) = 1;
    }
  while (
#line 104
  0);

  * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x20) = (AlarmValue & 0xFFFF0000) >> 16;

  * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x24) = AlarmValue & 0x0000ffff;
  do {
#line 109
      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (4 << 2)) = 0;
#line 109
      while (* (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (5 << 2)) == 0) ;
    }
  while (
#line 109
  0);
}

static __inline void STM32RtcC__enableInterrupt(void )
{





  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x00) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x00) & 0xfff00000)) | 0x02000000) + (1 << 2)) = 1;
}

#line 279
static inline uint32_t STM32RtcC__Alarm__getAlarm(void )
{
  return STM32RtcC__alarm;
}

# 116 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = STM32RtcC__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 109
inline static /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = STM32RtcC__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 139 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t Max706P__wd_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Max706P__wd_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/chips/max706/Max706P.nc"
static inline void Max706P__TimerWD__fired(void )
#line 46
{

  Max706P__wd_task__postTask();
}

# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static __inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__toggle(void )
#line 32
{







  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0xfff00000)) | 0x02000000) + (2 << 2)) = ! * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0xfff00000)) | 0x02000000) + (2 << 2));
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplStm32GeneralIOC.PortB.Bit2*/HplStm32GeneralIOPinP__18__IO__toggle();
#line 42
}
#line 42
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 31
{
  LedsP__Led0__toggle();
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BlinkC__computeTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BlinkC__computeTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 72 "BlinkC.nc"
static inline void BlinkC__Timer0__fired(void )
{
  ;
  BlinkC__computeTask__postTask();
  BlinkC__Leds__led0Toggle();
}

# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static __inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__toggle(void )
#line 32
{







  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0xfff00000)) | 0x02000000) + (1 << 2)) = ! * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0xfff00000)) | 0x02000000) + (1 << 2));
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplStm32GeneralIOC.PortB.Bit1*/HplStm32GeneralIOPinP__17__IO__toggle();
#line 42
}
#line 42
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 40
{
  LedsP__Led1__toggle();
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 79 "BlinkC.nc"
static inline void BlinkC__Timer1__fired(void )
{
  ;
  BlinkC__Leds__led1Toggle();
}

# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/pins/HplStm32GeneralIOPinP.nc"
static __inline __attribute((always_inline)) void /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__toggle(void )
#line 32
{







  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0xfff00000)) | 0x02000000) + (0 << 2)) = ! * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(1073810432U + 0x0c) & 0xfff00000)) | 0x02000000) + (0 << 2));
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplStm32GeneralIOC.PortB.Bit0*/HplStm32GeneralIOPinP__16__IO__toggle();
#line 42
}
#line 42
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpc/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 49
{
  LedsP__Led2__toggle();
}

# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 85 "BlinkC.nc"
static inline void BlinkC__Timer2__fired(void )
{
  ;
  BlinkC__Leds__led2Toggle();
}

# 204 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b95ca40ee48){
#line 83
  switch (arg_0x2b95ca40ee48) {
#line 83
    case 0U:
#line 83
      Max706P__TimerWD__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      BlinkC__Timer0__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BlinkC__Timer1__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      BlinkC__Timer2__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b95ca40ee48);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 125 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
static __inline void STM32RtcC__disableInterrupt(void )
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {



      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x00) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x00) & 0xfff00000)) | 0x02000000) + (1 << 2)) = 0;



      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (1 << 2)) = 0;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
}

#line 235
static inline void STM32RtcC__Alarm__stop(void )
{
  STM32RtcC__disableInterrupt();
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  STM32RtcC__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  STM32RtcC__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 272 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/stm32hardware.h"
static inline void __nesc_nvic_set_priority(uint8_t irqn, uint8_t priority)
{



  if (irqn >= 68) {

      * (volatile uint8_t *)(0xE0000000U + 0xE000 + 0xD18 + (irqn & 0xF) - 4) = priority;
    }
  else 
#line 280
    {

      * (volatile uint8_t *)(0xE0000000U + 0xE000 + 0x0100 + 0x300 + irqn) = priority;
    }
}

# 28 "/home/wangqi/platforms2013/tinyos-main/tos/chips/max706/Max706P.nc"
static inline void Max706P__Reflush__booted(void )
#line 28
{

  Max706P__WDI__toggle();
}

# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
inline static void STM32RtcC__WatchDogReflush__booted(void ){
#line 60
  Max706P__Reflush__booted();
#line 60
}
#line 60
# 165 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
static inline error_t STM32RtcC__Init__init(void )
{



  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x1c) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x1c) & 0xfff00000)) | 0x02000000) + (28 << 2)) = 1;




  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x7000 + 0x00) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x7000 + 0x00) & 0xfff00000)) | 0x02000000) + (8 << 2)) = 1;









  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0xfff00000)) | 0x02000000) + (16 << 2)) = 1;

  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0xfff00000)) | 0x02000000) + (16 << 2)) = 0;

  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0xfff00000)) | 0x02000000) + (0 << 2)) = 1;


  while (* (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0xfff00000)) | 0x02000000) + (1 << 2)) == 0) STM32RtcC__WatchDogReflush__booted();
#line 211
  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0xfff00000)) | 0x02000000) + (8 << 2)) = 1;

  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x20) & 0xfff00000)) | 0x02000000) + (15 << 2)) = 1;


  do {
#line 216
      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (4 << 2)) = 1;
    }
  while (
#line 216
  0);

  * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x0c) = 31;
  do {
#line 219
      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (4 << 2)) = 0;
#line 219
      while (* (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (5 << 2)) == 0) ;
    }
  while (
#line 219
  0);
  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x00) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x00) & 0xfff00000)) | 0x02000000) + (2 << 2)) = 1;
  do {
#line 221
      * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0100 + 0x00 + (3 >> 5) * 4) = 1 << (3 & 0x1f);
    }
  while (
#line 221
  0);
  __nesc_nvic_set_priority(3, 1 << 4);


  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0400 + 0x08) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0400 + 0x08) & 0xfff00000)) | 0x02000000) + (17 << 2)) = 1;
  * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0400 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x10000 + 0x0400 + 0x04) & 0xfff00000)) | 0x02000000) + (17 << 2)) = 1;
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = STM32RtcC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 154 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer2__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 64
}
#line 64
inline static void BlinkC__Timer1__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
inline static void BlinkC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 60 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void )
{
  BlinkC__Timer0__startPeriodic(250);
  BlinkC__Timer1__startPeriodic(500);
  BlinkC__Timer2__startPeriodic(1000);
}

# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void Max706P__TimerWD__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 34 "/home/wangqi/platforms2013/tinyos-main/tos/chips/max706/Max706P.nc"
static inline void Max706P__Boot__booted(void )
#line 34
{

  Max706P__TimerWD__startPeriodic(382);
}

# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  Max706P__Boot__booted();
#line 60
  BlinkC__Boot__booted();
#line 60
}
#line 60
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/max706/Max706P.nc"
static inline void Max706P__wd_task__runTask(void )
#line 40
{

  Max706P__WDI__toggle();
}

# 287 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b95c9f66108){
#line 75
  switch (arg_0x2b95c9f66108) {
#line 75
    case Max706P__wd_task:
#line 75
      Max706P__wd_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case BlinkC__computeTask:
#line 75
      BlinkC__computeTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b95c9f66108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 190 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/stm32hardware.h"
static __inline __attribute((always_inline)) void __nesc_disable_interrupt()
{
#line 214
   __asm volatile ("cpsid i");}

#line 163
static __inline __attribute((always_inline)) void __nesc_enable_interrupt()
{
#line 187
   __asm volatile ("cpsie i");}

# 76 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 76
{
#line 108
  if (!(((* (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x00) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x00) & 0xfff00000)) | 0x02000000) + ((0 * ((1 << 16) == (1 << 0)) + (0 + 1) * ((1 << 16) == (1 << (0 + 1))) + ((0 + 2) * ((1 << 16) == (1 << (0 + 2))) + (0 + 2 + 1) * ((1 << 16) == (1 << (0 + 2 + 1)))) + ((0 + 4) * ((1 << 16) == (1 << (0 + 4))) + (0 + 4 + 1) * ((1 << 16) == (1 << (0 + 4 + 1))) + ((0 + 4 + 2) * ((1 << 16) == (1 << (0 + 4 + 2))) + (0 + 4 + 2 + 1) * ((1 << 16) == (1 << (0 + 4 + 2 + 1))))) + ((0 + 8) * ((1 << 16) == (1 << (0 + 8))) + (0 + 8 + 1) * ((1 << 16) == (1 << (0 + 8 + 1))) + ((0 + 8 + 2) * ((1 << 16) == (1 << (0 + 8 + 2))) + (0 + 8 + 2 + 1) * ((1 << 16) == (1 << (0 + 8 + 2 + 1)))) + ((0 + 8 + 4) * ((1 << 16) == (1 << (0 + 8 + 4))) + (0 + 8 + 4 + 1) * ((1 << 16) == (1 << (0 + 8 + 4 + 1))) + ((0 + 8 + 4 + 2) * ((1 << 16) == (1 << (0 + 8 + 4 + 2))) + (0 + 8 + 4 + 2 + 1) * ((1 << 16) == (1 << (0 + 8 + 4 + 2 + 1)))))) + ((0 + 16) * ((1 << 16) == (1 << (0 + 16))) + (0 + 16 + 1) * ((1 << 16) == (1 << (0 + 16 + 1))) + ((0 + 16 + 2) * ((1 << 16) == (1 << (0 + 16 + 2))) + (0 + 16 + 2 + 1) * ((1 << 16) == (1 << (0 + 16 + 2 + 1)))) + ((0 + 16 + 4) * ((1 << 16) == (1 << (0 + 16 + 4))) + (0 + 16 + 4 + 1) * ((1 << 16) == (1 << (0 + 16 + 4 + 1))) + ((0 + 16 + 4 + 2) * ((1 << 16) == (1 << (0 + 16 + 4 + 2))) + (0 + 16 + 4 + 2 + 1) * ((1 << 16) == (1 << (0 + 16 + 4 + 2 + 1))))) + ((0 + 16 + 8) * ((1 << 16) == (1 << (0 + 16 + 8))) + (0 + 16 + 8 + 1) * ((1 << 16) == (1 << (0 + 16 + 8 + 1))) + ((0 + 16 + 8 + 2) * ((1 << 16) == (1 << (0 + 16 + 8 + 2))) + (0 + 16 + 8 + 2 + 1) * ((1 << 16) == (1 << (0 + 16 + 8 + 2 + 1)))) + ((0 + 16 + 8 + 4) * ((1 << 16) == (1 << (0 + 16 + 8 + 4))) + (0 + 16 + 8 + 4 + 1) * ((1 << 16) == (1 << (0 + 16 + 8 + 4 + 1))) + ((0 + 16 + 8 + 4 + 2) * ((1 << 16) == (1 << (0 + 16 + 8 + 4 + 2))) + (0 + 16 + 8 + 4 + 2 + 1) * ((1 << 16) == (1 << (0 + 16 + 8 + 4 + 2 + 1)))))))) << 2)) || * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x1c) & ~(1 << 28)) || * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18) & 0xfffffe00U) || * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x14) ^ ((1 << 4) | (1 << 2)))) {
      * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0D00 + 0x10) = (1 << 4) | (1 << 2);
    }









  {
    uint32_t reg;

#line 122
    reg = * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18);
    * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18) = reg & 0xfffffe00U;
     __asm volatile ("wfe");
    * (volatile uint32_t *)(0x40000000U + 0x18000 + 0x09000 + 0x18) = reg;
  }




  __nesc_enable_interrupt();



  * (volatile uint32_t *)(0xE0000000U + 0xE000 + 0x0D00 + 0x10) = 1 << 4;

   __asm volatile ("" :  :  : "memory");

  __nesc_disable_interrupt();

  return;
}

# 76 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 115 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_taskInfo.m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_taskInfo.m_head;

#line 120
      SchedulerBasicP__m_taskInfo.m_head = SchedulerBasicP__m_taskInfo.m_next[SchedulerBasicP__m_taskInfo.m_head];
      if (SchedulerBasicP__m_taskInfo.m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_taskInfo.m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_taskInfo.m_next[id] = SchedulerBasicP__NO_TASK;



      return id;
    }
  else 
    {






      return SchedulerBasicP__NO_TASK;
    }
}

#line 261
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 273
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/stm32hardware.h"
static __inline __attribute((always_inline)) __nesc_atomic_t __nesc_atomic_start(void )
{
#line 121
  __nesc_atomic_t oldState = 0;
  __nesc_atomic_t newState = 1;

#line 123
   __asm volatile (
  "mrs %[old], primask\n"
  "msr primask, %[new]\n" : 
  [old] "=&r"(oldState) : 
  [new] "r"(newState) : 
  "cc", "memory");

  return oldState;
}

static __inline __attribute((always_inline)) void __nesc_atomic_end(__nesc_atomic_t oldState)
{
#line 154
   __asm volatile ("" :  :  : "memory");

   __asm volatile (
  "msr primask, %[old]" :  : 

  [old] "r"(oldState));}

# 315 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
  void rtc_isr(void )
{
  if (! * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (2 << 2))) 
    {


      STM32RtcC__Alarm__stop();
      STM32RtcC__Alarm__fired();
    }
  else 
    {


      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (2 << 2)) = 0;

      STM32RtcC__Counter__overflow();
    }
}

# 282 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 284
    {
#line 284
      {
        unsigned char __nesc_temp = 
#line 284
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 284
          __nesc_atomic_end(__nesc_atomic); 
#line 284
          return __nesc_temp;
        }
      }
    }
#line 287
    __nesc_atomic_end(__nesc_atomic); }
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }






  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 246 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 250
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 254
          FALSE;

#line 254
          return __nesc_temp;
        }
      }
  }
#line 257
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 66 "BlinkC.nc"
static void BlinkC__computeTask__runTask(void )
{
  uint32_t i = 0;

#line 69
  for (i = 0; i < 40000; i++) 
    {
#line 70
      ;
    }
}

# 74 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static void /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerMilli32*/AlarmToTimerC__0__Timer__fired();
}

# 246 "/home/wangqi/platforms2013/tinyos-main/tos/chips/stm32/timer/STM32RtcC.nc"
static void STM32RtcC__Alarm__startAt(uint32_t t0, uint32_t dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 248
    {
      uint32_t now;
#line 249
      uint32_t elapsed;

#line 250
      * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (0 << 2)) = 0;
      now = STM32RtcC__Alarm__getNow();
      elapsed = now - t0;
      if (elapsed >= dt || elapsed + 1 == dt) 
        {

          STM32RtcC__alarm = now + 1 + (* (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x14) < 6 || * (volatile uint32_t *)((((((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0x000fffff) << 5) | ((uintptr_t )& * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x04) & 0xfff00000)) | 0x02000000) + (0 << 2)));
        }
      else 
        {
          STM32RtcC__alarm = t0 + dt;
        }
      STM32RtcC__setRtcAlarm(STM32RtcC__alarm);
      STM32RtcC__enableInterrupt();
    }
#line 264
    __nesc_atomic_end(__nesc_atomic); }
}

static uint32_t STM32RtcC__Alarm__getNow(void )
{
  uint32_t c;
  uint16_t tmp = 0;

#line 271
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 271
    {
      tmp = * (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x1c);
      c = ((uint32_t )* (volatile uint32_t *)(0x40000000U + 0x00000 + 0x2800 + 0x18) << 16) | tmp;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }

  return c;
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}





static void /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtTimersMilli32*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

