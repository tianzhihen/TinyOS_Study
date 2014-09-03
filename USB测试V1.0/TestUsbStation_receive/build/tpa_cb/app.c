#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
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
# 121 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/stdint.h" 3
typedef signed int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef signed int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef signed int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef signed int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;






static inline uint8_t __nesc_bf_decode8(const uint8_t *msg, unsigned offset, uint8_t length)  ;
#line 304
static inline void __nesc_bf_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)  ;
#line 304
static __inline uint8_t __nesc_ntohbf_uint8(const void *source, unsigned offset, uint8_t length)  ;
#line 304
static __inline uint8_t __nesc_htonbf_uint8(void *target, unsigned offset, uint8_t length, uint8_t value)  ;





static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
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
# 117 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x2ace71e771f0, const void *arg_0x2ace71e774c8, size_t arg_0x2ace71e77770);



extern void *memset(void *arg_0x2ace71e7a020, int arg_0x2ace71e7a288, size_t arg_0x2ace71e7a530);
# 71 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2ace71ea0838, const void *arg_0x2ace71ea0b10);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 32
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 43
struct __nesc_attr_atleastonce {
};
#line 44
struct __nesc_attr_exactlyonce {
};
# 244 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
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

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 27 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 105 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 135
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 170
#line 162
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVDD = 1, 
  ATM128_ADC_VREF_1_5 = 2, 
  ATM128_ADC_VREF_1_6 = 3, 
  ATM128_ADC_VREF_AVCC = ATM128_ADC_VREF_AVDD
};


enum __nesc_unnamed4250 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4251 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND, 
  ATM128_ADC_INT_TEMP = 41, 
  ATM128_ADC_INT_VDRTBBP = 52, 
  ATM128_ADC_INT_VDRTBBN = 61
};







#line 117
typedef struct __nesc_unnamed4252 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4253 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4254 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 173
typedef struct __nesc_unnamed4259 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;










#line 184
typedef struct __nesc_unnamed4260 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t acch : 1;
  uint8_t refok : 1;
  uint8_t acme : 1;
  uint8_t avddok : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/hardware.h"
enum __nesc_unnamed4261 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};
# 43 "/home/wangqi/platforms2013/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4262 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 16 "TestUsbStation.h"
#line 12
typedef nx_struct CountStruct {

  nx_uint16_t counter;
  nx_uint16_t RSSI;
} __attribute__((packed)) CountStruct;

enum __nesc_unnamed4263 {

  AM_Counter_Radio = 6, 
  TIMER_PERIOD_MILLI = 1000
};
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4264 {


  ATMRFA1_CLK8_OFF = 0, 
  ATMRFA1_CLK8_NORMAL = 1, 
  ATMRFA1_CLK8_DIVIDE_8 = 2, 
  ATMRFA1_CLK8_DIVIDE_32 = 3, 
  ATMRFA1_CLK8_DIVIDE_64 = 4, 
  ATMRFA1_CLK8_DIVIDE_128 = 5, 
  ATMRFA1_CLK8_DIVIDE_256 = 6, 
  ATMRFA1_CLK8_DIVIDE_1024 = 7, 


  ATMRFA1_WGM8_NORMAL = 0 << 3, 
  ATMRFA1_WGM8_PWM = 1 << 3, 
  ATMRFA1_WGM8_CTC = 2 << 3, 
  ATMRFA1_WGM8_PWM_FAST = 3 << 3, 
  ATMRFA1_WGM8_COMPARE_HIGH = 5 << 3, 
  ATMRFA1_WGM8_COMPARE_LOW = 7 << 3, 


  ATMRFA1_ASYNC_OFF = 0 << 6, 
  ATMRFA1_ASYNC_ON = 1 << 6, 
  ATMRFA1_ASYNC_EXT = 3 << 6
};


enum __nesc_unnamed4265 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4266 {


  ATMRFA1_CLK16_OFF = 0, 
  ATMRFA1_CLK16_NORMAL = 1, 
  ATMRFA1_CLK16_DIVIDE_8 = 2, 
  ATMRFA1_CLK16_DIVIDE_64 = 3, 
  ATMRFA1_CLK16_DIVIDE_256 = 4, 
  ATMRFA1_CLK16_DIVIDE_1024 = 5, 
  ATMRFA1_CLK16_EXTERNAL_FALL = 6, 
  ATMRFA1_CLK16_EXTERNAL_RISE = 7, 


  ATMRFA1_WGM16_NORMAL = 0 << 3, 
  ATMRFA1_WGM16_PWM_8BIT = 1 << 3, 
  ATMRFA1_WGM16_PWM_9BIT = 2 << 3, 
  ATMRFA1_WGM16_PWM_10BIT = 3 << 3, 
  ATMRFA1_WGM16_CTC_COMPARE = 4 << 3, 
  ATMRFA1_WGM16_PWM_FAST_8BIT = 5 << 3, 
  ATMRFA1_WGM16_PWM_FAST_9BIT = 6 << 3, 
  ATMRFA1_WGM16_PWM_FAST_10BIT = 7 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_LOW = 8 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_LOW = 9 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_HIGH = 10 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_HIGH = 11 << 3, 
  ATMRFA1_WGM16_CTC_CAPTURE = 12 << 3, 
  ATMRFA1_WGM16_RESERVED = 13 << 3, 
  ATMRFA1_WGM16_PWM_FAST_CAPTURE = 14 << 3, 
  ATMRFA1_WGM16_PWM_FAST_COMPARE = 15 << 3
};


enum __nesc_unnamed4267 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4268 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4269 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4270 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4271 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4272 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4273 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4274 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4275 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/TimerConfig.h"
typedef struct T16mhz {
} 
#line 71
T16mhz;
typedef struct T8mhz {
} 
#line 72
T8mhz;
typedef struct T4mhz {
} 
#line 73
T4mhz;
typedef struct T2mhz {
} 
#line 74
T2mhz;










typedef TMicro TMcu;
#line 101
typedef T32khz TRtc;
#line 124
typedef struct T62khz {
} 
#line 124
T62khz;
# 40 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 98
typedef __gnuc_va_list va_list;
# 242 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/stdio.h" 3
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 261
  int size;
  int len;
  int (*put)(char arg_0x2ace72389060, struct __file *arg_0x2ace723893a0);
  int (*get)(struct __file *arg_0x2ace72389a90);
  void *udata;
};
#line 405
extern struct __file *__iob[];
#line 417
struct __file;
#line 649
extern int printf(const char *__fmt, ...);
# 169 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/RadioConfig.h"
enum __nesc_unnamed4276 {





  RFA1_CCA_MODE_VALUE = 2 << 5, 





  RFA1_CCA_THRES_VALUE = 0xC7
};
#line 215
typedef T62khz TRadio;
typedef uint32_t tradio_size;
# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/types/IeeeEui64.h"
enum __nesc_unnamed4277 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4278 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4279 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4280 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4281 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 6 "/home/wangqi/platforms2013/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4282 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4283 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 14 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayer.h"
#line 12
typedef struct antdiv_metadata_t {
  uint8_t ant_id;
} antdiv_metadata_t;
# 12 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.h"
enum __nesc_unnamed4284 {
  ANTDIV_TXMODE_MASK = 0x03, 
  ANTDIV_TXMODE_EX_MASK = 0x04, 
  ANTDIV_TXMODE_ANT0 = 2, 
  ANTDIV_TXMODE_ANT1 = 1, 
  ANTDIV_TXMODE_EX_ANT0 = 2 | ANTDIV_TXMODE_EX_MASK, 
  ANTDIV_TXMODE_EX_ANT1 = 1 | ANTDIV_TXMODE_EX_MASK, 
  ANTDIV_RXMODE_AUTO = 0, 
  ANTDIV_RXMODE_ANT0 = 2, 
  ANTDIV_RXMODE_ANT1 = 1, 
  ANTDIV_RXMODE_MASK = 0x03
};
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayer.h"
#line 39
typedef nx_struct rfa1_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rfa1_header_t;









#line 44
typedef struct rfa1_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rfa1_metadata_t;
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1Radio.h"
#line 55
typedef nx_struct rfa1packet_header_t {

  rfa1_header_t rfa1;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rfa1packet_header_t;




#line 67
typedef nx_struct rfa1packet_footer_t {
} __attribute__((packed)) 

rfa1packet_footer_t;
#line 86
#line 72
typedef struct rfa1packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;

  antdiv_metadata_t antdiv;

  rfa1_metadata_t rfa1;
} rfa1packet_metadata_t;

enum __nesc_unnamed4285 {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_RSSI_MASK = 0x1F
};
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4286 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4287 {
  TOS_SERIAL_CLASSICAL_TYPE = 0, 
  TOS_SERIAL_SERVERLINK_TYPE = 1
};








enum __nesc_unnamed4288 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4289 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 133
#line 121
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 135
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 143
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;





#line 148
typedef nx_struct seial_control {
  unsigned char __nesc_filler0[1];
} __attribute__((packed)) 

serial_control_t;






#line 154
typedef nx_struct serial_metadata {
  nx_uint8_t proto;
  nx_uint8_t isControl;
  serial_control_t control;
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 32 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa/platform_message.h"
#line 29
typedef union message_header {
  rfa1packet_header_t rfa1;
  serial_header_t serial;
} message_header_t;



#line 34
typedef union message_footer {
  rfa1packet_footer_t rfa1;
} message_footer_t;




#line 38
typedef union message_metadata {
  rfa1packet_metadata_t rfa1;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/home/wangqi/platforms2013/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/printf.h"
int printfflush();






#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4290 {
  AM_PRINTF_MSG = 100
};
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/crc.h"
const const_uint16_t crcTable[256] = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4291 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4292 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4293 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4294 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4295 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4296 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4297 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4298 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 87 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PutcharP.nc"
static int uart_putchar(char c, struct __file *stream);
static struct __file atm128_stdout = 
{ .put = (int (*)(char c, struct __file *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
# 33 "/home/wangqi/platforms2013/tinyos-main/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
typedef TMilli WatchDogP__TimerWD__precision_tag;
enum /*TimerMilliP.AlarmMilli32C.MuxAlarm62khz32C*/MuxAlarm62khz32C__0____nesc_unnamed4299 {
  MuxAlarm62khz32C__0__CLIENT_ID = 0U
};
typedef T62khz /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag;
typedef uint32_t /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type;
typedef /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__precision_tag;
typedef /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type;
typedef /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__precision_tag;
typedef /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type;
typedef T62khz /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__precision_tag;
typedef uint32_t /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__size_type;
typedef /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__precision_tag /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__precision_tag;
typedef /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type;
typedef /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__size_type;
typedef /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__precision_tag /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__precision_tag;
typedef /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type;
typedef /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareA__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareB__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__Counter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__SfdCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareC__size_type;
typedef T62khz /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__precision_tag;
typedef uint32_t /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__precision_tag /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__precision_tag /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type;
typedef /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__size_type;
typedef TMilli /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef T62khz /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type;
typedef T62khz /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli TestUsbStationC__Timer0__precision_tag;
typedef uint8_t TestUsbStationC__PacketRSSI__value_type;
enum SerialAMQueueP____nesc_unnamed4300 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
typedef TMilli /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareA__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Capture__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareB__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareC__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Timer__size_type;
typedef TMcu /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__precision_tag;
typedef uint16_t /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__size_type;
typedef /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__precision_tag /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__precision_tag;
typedef /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__size_type /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__size_type;
typedef /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__precision_tag /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__precision_tag;
typedef /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type;
typedef /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TRadio RFA1RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1RadioP__PacketTimeStamp__size_type;
typedef uint8_t RFA1RadioP__PacketAntenna__value_type;
typedef TRadio /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__precision_tag;
typedef tradio_size /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__size_type;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMilli /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__value_type;
typedef TMicro RFA1DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RFA1DriverLayerP__BusyWait__size_type;
typedef uint8_t RFA1DriverLayerP__PacketRSSI__value_type;
typedef TRadio RFA1DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RFA1DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RFA1DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RFA1DriverLayerP__PacketAntenna__value_type;
typedef uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RFA1DriverLayerP__PacketLinkQuality__value_type;
typedef uint32_t RFA1DriverLayerP__SfdCapture__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef T62khz /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef T62khz /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__1__precision_tag;
typedef uint32_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__1__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__1__precision_tag /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__precision_tag;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__precision_tag /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__precision_tag;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__size_type;
typedef T62khz /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC*/AtmegaAlarmC__2__precision_tag;
typedef uint32_t /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC*/AtmegaAlarmC__2__size_type;
typedef /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC*/AtmegaAlarmC__2__precision_tag /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__precision_tag;
typedef /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC*/AtmegaAlarmC__2__size_type /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type;
typedef /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__size_type;
typedef /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__precision_tag /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__precision_tag;
typedef /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__size_type;
typedef /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__size_type;
enum AMQueueP____nesc_unnamed4301 {
  AMQueueP__NUM_CLIENTS = 1U
};
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t McuInitP__AdcInit__default__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void WatchDogP__wd_task__runTask(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t WatchDogP__WDInit__init(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void WatchDogP__Boot__booted(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void WatchDogP__TimerWD__fired(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ace720cf998);
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ace720cf998, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type t0, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);
#line 73
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ace720cf998);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired(void );
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__getNow(void );
#line 103
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type t0, /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type dt);
#line 73
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareA__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareA__set(HplAtmRfa1TimerMacP__CompareA__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareA__start(void );


static void HplAtmRfa1TimerMacP__CompareA__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareB__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareB__set(HplAtmRfa1TimerMacP__CompareB__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareB__start(void );


static void HplAtmRfa1TimerMacP__CompareB__stop(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 53
static bool HplAtmRfa1TimerMacP__Counter__test(void );
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 61
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
static void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode);
#line 40
static HplAtmRfa1TimerMacP__SfdCapture__size_type HplAtmRfa1TimerMacP__SfdCapture__get(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareC__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareC__set(HplAtmRfa1TimerMacP__CompareC__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareC__start(void );


static void HplAtmRfa1TimerMacP__CompareC__stop(void );
# 76 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ace72331690);
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ace72331690, 
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ace72331690, 
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ace72331690);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ace71fc5020);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ace71fc5020);
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void TestUsbStationC__Timer0__fired(void );
# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static void TestUsbStationC__AMControl__startDone(error_t error);
#line 138
static void TestUsbStationC__AMControl__stopDone(error_t error);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void TestUsbStationC__Boot__booted(void );
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void TestUsbStationC__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TestUsbStationC__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
static void TestUsbStationC__RadioChannel__setChannelDone(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 134
static void LedsP__Leds__set(uint8_t val);
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2ace724ee330);
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2ace724ee330);
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2ace724ee330);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2ace7258ec70, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2ace7258f990, 
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2ace7258f990, 
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2ace725ec508, 
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2ace725eb780, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__start(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__runTask(void );
#line 75
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__runTask(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__Init__init(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flushDone(void );
#line 49
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__default__flush(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__runTask(void );
# 94 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__dataReceived(uint8_t data);





static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDone(void );
#line 85
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__delimiterReceived(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__runTask(void );
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__startSend(uint8_t proto, uint8_t first_byte);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace72769020, 
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace72769020, 
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace7276a488, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace727688e8, 
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace727688e8);
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace727688e8, 
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__fired(void );
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(uint8_t proto);






static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDelimiter(void );
#line 79
static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__resetReceive(void );
#line 65
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putData(uint8_t data);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__startDone(error_t error);
#line 138
static void /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__stopDone(error_t error);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__default__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__default__fired(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__default__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__default__fired(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 61
static void HplAtmRfa1Timer1P__Timer__start(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__head(void );
#line 97
static error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(
#line 93
/*PrintfC.QueueC*/QueueC__0__Queue__t  newVal);
#line 72
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 88
static 
#line 86
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PrintfP__Init__init(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/Putchar.nc"
static int PrintfP__Putchar__putchar(int c);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 40
static am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RFA1RadioP__RadioAlarm__fired(void );
# 86 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );
#line 75
static bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RFA1RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
static bool RFA1RadioP__RFA1DriverConfig__isAddressRecognitionEnabled(void );
#line 47
static uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );
#line 79
static bool RFA1RadioP__RFA1DriverConfig__isAckEnabled(void );
#line 41
static uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);
#line 53
static uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);





static bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0, 
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);
#line 45
static bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 16 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Sniff.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__default__catch(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2f788, 
# 12 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Sniff.nc"
message_t * msg, 
void * payload, 


uint8_t len);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SendNotifier.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2e2f0, 
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c31020, 
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(
# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c31020, 
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c30ca0, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c30158, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2d020, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2dbb0, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d10020);
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d10020);
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d0e538);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d0e538);
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d12e30);
# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d12e30);
# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d12e30);
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d12e30);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);





static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 185
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 168
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x2ace72e96970, 
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x2ace72e96970, 
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannel(uint8_t channel);










static uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__getChannel(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__header(message_t *msg);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__default__fired(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__wait(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0, 
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__cancel(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__isFree(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__run(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x2ace730ad2f8, 
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x2ace730ad2f8, 
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x2ace730ad2f8, 
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 20 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.nc"
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__rxModeGet(void );









static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__txModeGet(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__clear(message_t *msg);
#line 44
static /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__value_type /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__get(message_t *msg);
#line 40
static bool /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__isSet(message_t *msg);
#line 55
static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__set(message_t *msg, /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__value_type value);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__start(void );









static error_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__stop(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__default__done(error_t error);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);
#line 44
static RFA1DriverLayerP__PacketRSSI__value_type RFA1DriverLayerP__PacketRSSI__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketRSSI__isSet(message_t *msg);
#line 55
static void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, RFA1DriverLayerP__PacketRSSI__value_type value);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__SoftwareInit__init(void );
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static error_t RFA1DriverLayerP__RadioState__turnOn(void );






static error_t RFA1DriverLayerP__RadioState__setChannel(uint8_t channel);










static uint8_t RFA1DriverLayerP__RadioState__getChannel(void );
# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTransmitPower__value_type RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t RFA1DriverLayerP__ExtAmpControl__default__start(void );









static error_t RFA1DriverLayerP__ExtAmpControl__default__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void );
# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTimeSyncOffset__value_type RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__PlatformInit__init(void );
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, RFA1DriverLayerP__PacketLinkQuality__value_type value);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__run(void );
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__fired(void );
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__getNow(void );
#line 66
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__size_type dt);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Init__init(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__overflow(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__fired(void );
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__start(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__size_type dt);






static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Init__init(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__overflow(void );
# 135 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static 
#line 133
void * 

/*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2ace7258ec70, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 125 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static 
#line 123
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2ace7258f990, 
# 122 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2ace7258f990, 
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__WDInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t McuInitP__RadioInit__init(void );
#line 62
static error_t McuInitP__AdcInit__init(void );
#line 62
static error_t McuInitP__MeasureClock__init(void );
#line 62
static error_t McuInitP__TimerInit__init(void );
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void );
#line 77
static inline error_t McuInitP__Init__init(void );
#line 101
static inline error_t McuInitP__AdcInit__default__init(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4302 {
  MeasureClockC__MAGIC = 31250 / (16 / 8)
};
#line 172
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 38 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t WatchDogP__wd_task__postTask(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void WatchDogP__TimerWD__startPeriodic(uint32_t dt);
# 25 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/WatchDogP.nc"
enum WatchDogP____nesc_unnamed4303 {
#line 25
  WatchDogP__wd_task = 0U
};
#line 25
typedef int WatchDogP____nesc_sillytask_wd_task[WatchDogP__wd_task];
#line 15
static inline error_t WatchDogP__WDInit__init(void );





static inline void WatchDogP__Boot__booted(void );



static inline void WatchDogP__wd_task__runTask(void );



static inline void WatchDogP__TimerWD__fired(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ace720cf998);
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void );
#line 103
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
enum /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4304 {
  VirtualizeAlarmC__0__NUM_ALARMS = 1U
};




#line 58
typedef struct /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4305 {
  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0;
  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt;
} /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t;
#line 80
#line 76
struct /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4306 {
  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t alarm[/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool isset[/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool is_signaling;
} /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m;

static inline error_t /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );




static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void );
#line 139
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void );
#line 166
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id);



static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
#line 183
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);
#line 200
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id);
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__reset(void );
#line 43
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__set(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__size_type value);
#line 59
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__start(void );


static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__fired(void );
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init(void );










static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired(void );





static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop(void );










static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__setAlarm(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type time);






static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type nt0, /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type ndt);
#line 115
static inline /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__getNow(void );









static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__fired(void );
#line 48
static void HplAtmRfa1TimerMacP__CompareB__fired(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__overflow(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtmRfa1TimerMacP__McuPowerState__update(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__fired(void );
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
#line 59
typedef union HplAtmRfa1TimerMacP__reg32_t {

  uint32_t full;
  struct  {

    uint8_t ll;
    uint8_t lh;
    uint8_t hl;
    uint8_t hh;
  } ;
} HplAtmRfa1TimerMacP__reg32_t;



static uint32_t HplAtmRfa1TimerMacP__Counter__get(void );
#line 110
void __vector_68(void ) __attribute((signal))   ;

static inline bool HplAtmRfa1TimerMacP__Counter__test(void );





static inline void HplAtmRfa1TimerMacP__Counter__start(void );
#line 132
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 168
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value);
#line 187
void __vector_65(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareA__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareA__start(void );






static inline void HplAtmRfa1TimerMacP__CompareA__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 248
static inline void HplAtmRfa1TimerMacP__CompareB__set(uint32_t value);
#line 267
void __vector_66(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareB__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareB__start(void );






static inline void HplAtmRfa1TimerMacP__CompareB__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode);
#line 328
static inline void HplAtmRfa1TimerMacP__CompareC__set(uint32_t value);
#line 347
void __vector_67(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareC__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareC__start(void );






static inline void HplAtmRfa1TimerMacP__CompareC__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareC__setMode(uint8_t mode);
#line 393
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void );
#line 423
static inline void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode);
#line 439
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/McuSleepC.nc"
const const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };


int8_t McuSleepC__powerState = -1;

static inline void McuSleepC__McuSleep__sleep(void );
#line 95
static inline void McuSleepC__McuPowerState__update(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__setMode(uint8_t mode);
#line 53
static bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__test(void );
#line 40
static /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__get(void );
#line 61
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__start(void );
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );







static inline /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static inline void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow(void );




static inline bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4307 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 6, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 6, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void );
# 77 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0;
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4308 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type ) - 1 - 6, 
  TransformAlarmC__0__MAX_DELAY = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )1 << /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4309 {
#line 74
  AlarmToTimerC__0__fired = 1U
};
#line 74
typedef int /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ace72331690);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4310 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 2U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4311 {

  VirtualizeTimerC__0__NUM_TIMERS = 3U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4312 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
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
uint8_t arg_0x2ace71fc5020);
# 76 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4313 {

  SchedulerBasicP__NUM_TASKS = 19U, 
  SchedulerBasicP__NO_TASK = 255
};
#line 104
#line 83
typedef struct SchedulerBasicP____nesc_unnamed4314 {
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




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void TestUsbStationC__Timer0__startPeriodic(uint32_t dt);
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t TestUsbStationC__AMControl__start(void );
# 135 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static 
#line 133
void * 

TestUsbStationC__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static TestUsbStationC__PacketRSSI__value_type TestUsbStationC__PacketRSSI__get(message_t *msg);
#line 40
static bool TestUsbStationC__PacketRSSI__isSet(message_t *msg);
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
static void TestUsbStationC__Leds__led0Off(void );










static void TestUsbStationC__Leds__led1On(void );




static void TestUsbStationC__Leds__led1Off(void );
#line 94
static void TestUsbStationC__Leds__led2Off(void );
#line 134
static void TestUsbStationC__Leds__set(uint8_t val);
#line 56
static void TestUsbStationC__Leds__led0On(void );
#line 89
static void TestUsbStationC__Leds__led2On(void );
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
static error_t TestUsbStationC__RadioChannel__setChannel(uint8_t channel);










static uint8_t TestUsbStationC__RadioChannel__getChannel(void );
# 27 "TestUsbStationC.nc"
bool TestUsbStationC__BUSY = FALSE;
message_t TestUsbStationC__msgpacket;
uint16_t TestUsbStationC__counter;

static inline void TestUsbStationC__Boot__booted(void );




static inline void TestUsbStationC__AMControl__startDone(error_t error);
#line 49
static inline void TestUsbStationC__AMControl__stopDone(error_t error);




static inline void TestUsbStationC__Timer0__fired(void );
#line 80
static inline message_t *TestUsbStationC__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 134
static void TestUsbStationC__AMSend__sendDone(message_t *msg, error_t error);
#line 150
static inline void TestUsbStationC__RadioChannel__setChannelDone(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
#line 136
static inline void LedsP__Leds__set(uint8_t val);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(uint8_t bit);
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(uint8_t bit);




static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(uint8_t bit);
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2ace7258ec70, 
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2ace7258f990, 
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4315 {
#line 126
  AMQueueImplP__0__CancelTask = 3U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4316 {
#line 169
  AMQueueImplP__0__errorTask = 4U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4317 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2ace725ec508, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2ace725eb780, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 102
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 149
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 173
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__startDone(error_t error);
#line 138
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__stopDone(error_t error);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__postTask(void );
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialControl__start(void );









static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialControl__stop(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__postTask(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flush(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__postTask(void );
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDelimiter(void );
#line 79
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__resetReceive(void );
#line 65
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData(uint8_t data);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__postTask(void );
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__startPacket(uint8_t proto);






static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__endPacket(error_t result);
# 194 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4318 {
#line 194
  SerialP__0__RunTx = 5U
};
#line 194
typedef int /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_sillytask_RunTx[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx];
#line 325
enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4319 {
#line 325
  SerialP__0__startDoneTask = 6U
};
#line 325
typedef int /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_sillytask_startDoneTask[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask];










enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4320 {
#line 336
  SerialP__0__stopDoneTask = 7U
};
#line 336
typedef int /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_sillytask_stopDoneTask[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask];









enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4321 {
#line 346
  SerialP__0__defaultSerialFlushTask = 8U
};
#line 346
typedef int /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_sillytask_defaultSerialFlushTask[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask];
#line 83
enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4322 {
  SerialP__0__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__0__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__0__SERIAL_MTU = 255, 
  SerialP__0__SERIAL_VERSION = 2, 
  SerialP__0__ACK_QUEUE_SIZE = 5
};

enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4323 {
  SerialP__0__RXSTATE_NOSYNC, 
  SerialP__0__RXSTATE_PROTO, 
  SerialP__0__RXSTATE_TOKEN, 
  SerialP__0__RXSTATE_INFO, 
  SerialP__0__RXSTATE_INACTIVE
};

enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4324 {
  SerialP__0__TXSTATE_IDLE, 
  SerialP__0__TXSTATE_PROTO, 
  SerialP__0__TXSTATE_SEQNO, 
  SerialP__0__TXSTATE_INFO, 
  SerialP__0__TXSTATE_FCS1, 
  SerialP__0__TXSTATE_FCS2, 
  SerialP__0__TXSTATE_ENDFLAG, 
  SerialP__0__TXSTATE_ENDWAIT, 
  SerialP__0__TXSTATE_FINISH, 
  SerialP__0__TXSTATE_ERROR, 
  SerialP__0__TXSTATE_INACTIVE
};





#line 113
typedef enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4325 {
  SerialP__0__BUFFER_AVAILABLE, 
  SerialP__0__BUFFER_FILLING, 
  SerialP__0__BUFFER_COMPLETE
} /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__tx_data_buffer_states_t;

enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4326 {
  SerialP__0__TX_ACK_INDEX = 0, 
  SerialP__0__TX_DATA_INDEX = 1, 
  SerialP__0__TX_BUFFER_COUNT = 2
};






#line 126
typedef struct /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4327 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RX_DATA_BUFFER_SIZE + 1];
} /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buf_t;




#line 132
typedef struct /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4328 {
  uint8_t state;
  uint8_t buf;
} /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__tx_buf_t;





#line 137
typedef struct /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0____nesc_unnamed4329 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ACK_QUEUE_SIZE + 1];
} /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_t;



/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buf_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf;
/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__tx_buf_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_BUFFER_COUNT];


bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__is_stop = TRUE;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxByteCnt;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxProto;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxSeqno;
uint16_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC;



uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txByteCnt;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProtoPending;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txSeqno;
uint16_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txPending;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex;


/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ;

bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__offPending = FALSE;



static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txInit(void );
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit(void );
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackInit(void );

static __inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_full(void );
static __inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_empty(void );
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_push(uint8_t token);
static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_top(void );
static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_pop(void );




static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_push(uint8_t data);
static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_top(void );
static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_pop(void );
static __inline uint16_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_current_crc(void );

static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_state_machine(bool isDelimeter, uint8_t data);
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx(void );




static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txInit(void );
#line 210
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit(void );








static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackInit(void );



static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__Init__init(void );
#line 237
static __inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_full(void );









static __inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_empty(void );





static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_push(uint8_t token);









static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_top(void );









static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_pop(void );
#line 300
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_push(uint8_t data);



static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_top(void );



static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_pop(void );





static __inline uint16_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_current_crc(void );










static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__runTask(void );










static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__runTask(void );



static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flushDone(void );





static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__runTask(void );


static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__default__flush(void );



static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__start(void );










static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__testOff(void );
#line 401
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__delimiterReceived(void );








static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__dataReceived(uint8_t data);



static inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__valid_rx_proto(uint8_t proto);










static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_state_machine(bool isDelimeter, uint8_t data);
#line 537
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx(void );










static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__completeSend(void );








static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__startSend(uint8_t proto, uint8_t b);
#line 579
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__runTask(void );
#line 688
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDone(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace72769020, 
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace7276a488, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace727688e8, 
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace727688e8);
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2ace727688e8, 
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__startOneShot(uint32_t dt);




static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__stop(void );
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t proto, uint8_t first_byte);
# 194 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4330 {
#line 194
  SerialDispatcherP__0__signalSendDone = 9U
};
#line 194
typedef int /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 350
enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4331 {
#line 350
  SerialDispatcherP__0__receiveTask = 10U
};
#line 350
typedef int /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 69
#line 65
typedef enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4332 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4333 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 77
typedef struct /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4334 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvProto;

message_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;
bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ackPending = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendTaskPending = FALSE;

uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskProto;





static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 230
static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 246
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);







static inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(uint8_t proto);
#line 305
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 350
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 406
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 469
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__fired(void );










static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__dataReceived(uint8_t data);





static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDone(void );
#line 85
static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__delimiterReceived(void );
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0____nesc_unnamed4335 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__HdlcState;


/*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__HdlcState /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state = { 0, 0 };
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__txTemp;
uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data;


static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__resetReceive(void );





static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receivedByte(uint8_t data);
#line 98
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDelimiter(void );







static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__start(void );
# 7 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialRestartControlP.nc"
bool /*SerialActiveMessageC.SR*/SerialRestartControlP__0__start_flag = FALSE;
bool /*SerialActiveMessageC.SR*/SerialRestartControlP__0__restart_flag = FALSE;

static inline void /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__startDone(error_t err);
#line 23
static inline void /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__stopDone(error_t err);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 63
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 64
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 65
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 94
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 134
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 156
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 174
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 221
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 157
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 214
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 322
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;



static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );








static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__fired(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__fired(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__overflow(void );
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
void __vector_20(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__Timer__start(void );
#line 95
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 162
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void );

void __vector_17(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void );

void __vector_18(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void );

void __vector_19(void ) __attribute((signal))   ;
#line 322
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void );

void __vector_16(void ) __attribute((signal))   ;
#line 364
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__setMode(uint8_t mode);
#line 61
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__start(void );
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
#line 66
static inline void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow(void );
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__upper_count_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__m_upper;

enum /*CounterMcu32C.TransformCounterC*/TransformCounterC__1____nesc_unnamed4336 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC__0__queue_t  /*PrintfC.QueueC*/QueueC__0__queue[250];
uint8_t /*PrintfC.QueueC*/QueueC__0__head = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );







static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void );
#line 89
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 101
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal);
# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Queue.nc"
static error_t PrintfP__Queue__enqueue(
#line 93
PrintfP__Queue__t  newVal);
#line 88
static 
#line 86
PrintfP__Queue__t  

PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );
#line 65
static uint8_t PrintfP__Queue__size(void );
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


PrintfP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 114 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4337 {
#line 114
  PrintfP__retrySend = 11U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4338 {
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STARTED;

static inline error_t PrintfP__Init__init(void );




static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 142
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);









static inline int PrintfP__Putchar__putchar(int c);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );
#line 110
int uart_putchar(char c, struct __file *stream) __attribute((noinline))   ;
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 30 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.nc"
static uint8_t RFA1RadioP__AntennaDiversityConfig__txModeGet(void );
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RFA1RadioP__RadioAlarm__getNow(void );
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void RFA1RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RFA1RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void RFA1RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RFA1RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 168
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static RFA1RadioP__PacketAntenna__value_type RFA1RadioP__PacketAntenna__get(message_t *msg);










static void RFA1RadioP__PacketAntenna__set(message_t *msg, RFA1RadioP__PacketAntenna__value_type value);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);




static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );






static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);




static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);





bool RFA1RadioP__ackEnable = TRUE;


bool RFA1RadioP__addressRecognition = TRUE;








static inline bool RFA1RadioP__RFA1DriverConfig__isAddressRecognitionEnabled(void );
#line 131
static inline bool RFA1RadioP__RFA1DriverConfig__isAckEnabled(void );
#line 145
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);









static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);








static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 194
static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);









static inline void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);









static inline void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 303
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 344
static inline void RFA1RadioP__RadioAlarm__fired(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4339 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
#line 88
static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void );
#line 94
static __inline void TaskletC__Tasklet__suspend(void );




static void TaskletC__Tasklet__resume(void );
#line 112
static void TaskletC__Tasklet__schedule(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
# 16 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Sniff.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__catch(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2f788, 
# 12 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Sniff.nc"
message_t * msg, 
void * payload, 


uint8_t len);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SendNotifier.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2e2f0, 
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c31020, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c30ca0, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 40
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c30158, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2d020, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x2ace72c2dbb0, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static inline error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 99
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 118
static __inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 144
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__default__catch(am_id_t id, message_t *msg, void *payload, uint8_t len);



static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);









static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);









static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 267
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 120
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4340 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d10020);
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d10020);
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d0e538);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d0e538);
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ace72d12e30);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4341 {
#line 68
  SimpleArbiterP__0__grantedTask = 12U
};
#line 68
typedef int /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4342 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4343 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;



static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 83
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 149
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4344 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4345 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static inline ieee154_simple_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 92
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);






static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 158
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 282
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );






static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__setChannel(uint8_t channel);










static uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__getChannel(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4346 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 13U
};
#line 144
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4347 {
#line 189
  MessageBufferLayerP__0__sendTask = 14U
};
#line 189
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4348 {
#line 322
  MessageBufferLayerP__0__deliverTask = 15U
};
#line 322
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4349 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 118
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannel(uint8_t channel);
#line 139
static inline uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__getChannel(void );




static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 182
message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4350 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4351 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4352 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 16U
};
#line 78
typedef int /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4353 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 50
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg);
# 86 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );
#line 75
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RFA1Packet__payloadLength(message_t *msg);
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
uint8_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4354 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 100
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 127
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
#line 153
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RadioReceive__header(message_t *msg);
# 185 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RFA1DriverConfig__isAddressRecognitionEnabled(void );
# 29 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAddressRecognitionLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__header(message_t *msg);







static inline message_t */*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__receive(message_t *msg);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__fired(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x2ace72c04df0);
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__start(/*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__size_type dt);






static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__stop(void );
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__schedule(void );
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state;
enum /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1____nesc_unnamed4355 {

  RadioAlarmP__1__STATE_READY = 0, 
  RadioAlarmP__1__STATE_WAIT = 1, 
  RadioAlarmP__1__STATE_FIRED = 2
};

uint8_t /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__alarm;

static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__fired(void );
#line 93
static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__run(void );








static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__isFree(uint8_t id);




static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__cancel(uint8_t id);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 77
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 58 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__metadataLength(message_t *msg);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__clear(message_t *msg);
#line 40
static bool /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__get(message_t *msg);









static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__set(message_t *msg);
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__lock;
uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__txMode = 2;
uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__rxMode = 0;

static antdiv_metadata_t */*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__getMeta(message_t *msg);




static inline error_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__start(void );




static inline error_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__stop(void );










static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__txModeGet(void );
#line 67
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__rxModeGet(void );






static inline bool /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__isSet(message_t *msg);



static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__set(message_t *msg, uint8_t logical_ant_id);




static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__get(message_t *msg);



static inline void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__clear(message_t *msg);





static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__headerLength(message_t *msg);



static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__payloadLength(message_t *msg);



static inline void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);



static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__maxPayloadLength(void );



static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__done(error_t error);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 40
static bool RFA1DriverLayerP__RSSIFlag__get(message_t *msg);









static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg);
# 20 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.nc"
static uint8_t RFA1DriverLayerP__AntennaDiversityConfig__rxModeGet(void );









static uint8_t RFA1DriverLayerP__AntennaDiversityConfig__txModeGet(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void RFA1DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RFA1DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RFA1DriverLayerP__PacketTimeStamp__size_type value);
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static void RFA1DriverLayerP__RadioState__done(void );
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t RFA1DriverLayerP__LocalTime__get(void );
# 47 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void );
#line 41
static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg);
#line 53
static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg);





static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t RFA1DriverLayerP__ExtAmpControl__start(void );









static error_t RFA1DriverLayerP__ExtAmpControl__stop(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketAntenna__clear(message_t *msg);
#line 44
static RFA1DriverLayerP__PacketAntenna__value_type RFA1DriverLayerP__PacketAntenna__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketAntenna__isSet(message_t *msg);
#line 55
static void RFA1DriverLayerP__PacketAntenna__set(message_t *msg, RFA1DriverLayerP__PacketAntenna__value_type value);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t RFA1DriverLayerP__RxModeLock__start(void );









static error_t RFA1DriverLayerP__RxModeLock__stop(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void RFA1DriverLayerP__RadioSend__ready(void );
#line 56
static void RFA1DriverLayerP__RadioSend__sendDone(error_t error);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
static void RFA1DriverLayerP__McuPowerState__update(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
static void RFA1DriverLayerP__SfdCapture__setMode(uint8_t mode);
#line 40
static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void );
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg);
#line 55
static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__schedule(void );
# 101 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg);




static void *RFA1DriverLayerP__getPayload(message_t *msg);




static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg);






uint8_t RFA1DriverLayerP__state;
enum RFA1DriverLayerP____nesc_unnamed4356 {

  RFA1DriverLayerP__STATE_P_ON = 0, 
  RFA1DriverLayerP__STATE_SLEEP = 1, 
  RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RFA1DriverLayerP__STATE_TRX_OFF = 3, 
  RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RFA1DriverLayerP__STATE_RX_ON = 5, 
  RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6, 
  RFA1DriverLayerP__STATE_CAL_2_RX_ON = 7
};

uint8_t RFA1DriverLayerP__cmd;
enum RFA1DriverLayerP____nesc_unnamed4357 {

  RFA1DriverLayerP__CMD_NONE = 0, 
  RFA1DriverLayerP__CMD_TURNOFF = 1, 
  RFA1DriverLayerP__CMD_STANDBY = 2, 
  RFA1DriverLayerP__CMD_TURNON = 3, 
  RFA1DriverLayerP__CMD_TRANSMIT = 4, 
  RFA1DriverLayerP__CMD_RECEIVE = 5, 
  RFA1DriverLayerP__CMD_CCA = 6, 
  RFA1DriverLayerP__CMD_CHANNEL = 7, 
  RFA1DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RFA1DriverLayerP__CMD_DOWNLOAD = 9, 
  RFA1DriverLayerP__CMD_CAL = 10
};

enum RFA1DriverLayerP____nesc_unnamed4358 {
  RFA1DriverLayerP__IRQ_NONE = 0, 
  RFA1DriverLayerP__IRQ_AWAKE = 1, 
  RFA1DriverLayerP__IRQ_TX_END = 2, 
  RFA1DriverLayerP__IRQ_XAH_AMI = 4, 
  RFA1DriverLayerP__IRQ_CCA_ED_DONE = 8, 
  RFA1DriverLayerP__IRQ_RX_END = 16, 
  RFA1DriverLayerP__IRQ_RX_START = 32, 
  RFA1DriverLayerP__IRQ_PLL_UNLOCK = 64, 
  RFA1DriverLayerP__IRQ_PLL_LOCK = 128
};

enum RFA1DriverLayerP____nesc_unnamed4359 {

  RFA1DriverLayerP__RFA1RADIOON = 0U
};

uint8_t RFA1DriverLayerP__radioIrq;

uint8_t RFA1DriverLayerP__txPower;
uint8_t RFA1DriverLayerP__channel;

message_t *RFA1DriverLayerP__rxMsg;
message_t RFA1DriverLayerP__rxMsgBuffer;

uint8_t RFA1DriverLayerP__rssiClear;
uint8_t RFA1DriverLayerP__rssiBusy;





static inline error_t RFA1DriverLayerP__PlatformInit__init(void );










static inline error_t RFA1DriverLayerP__SoftwareInit__init(void );
#line 245
static inline uint8_t RFA1DriverLayerP__RadioState__getChannel(void );




static inline error_t RFA1DriverLayerP__RadioState__setChannel(uint8_t c);
#line 268
static __inline void RFA1DriverLayerP__changeChannel(void );
#line 288
static __inline void RFA1DriverLayerP__changeState(void );
#line 419
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void );
#line 435
enum RFA1DriverLayerP____nesc_unnamed4360 {

  RFA1DriverLayerP__TX_SFD_DELAY = 11
};

static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
#line 597
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error);




static __inline void RFA1DriverLayerP__downloadMessage(void );
#line 666
static inline void RFA1DriverLayerP__serviceRadio(void );
#line 828
void __vector_63(void ) __attribute((interrupt))   ;









void __vector_60(void ) __attribute((interrupt))   ;










void __vector_59(void ) __attribute((signal))   ;
#line 861
void __vector_57(void ) __attribute((interrupt))   ;









void __vector_64(void ) __attribute((interrupt))   ;









void __vector_61(void ) __attribute((interrupt))   ;
#line 893
static inline void RFA1DriverLayerP__Tasklet__run(void );
#line 921
static inline mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void );









static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);





static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);







static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);
#line 969
static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 992
static inline bool RFA1DriverLayerP__PacketRSSI__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketRSSI__get(message_t *msg);




static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 1057
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
#line 1071
static inline error_t RFA1DriverLayerP__ExtAmpControl__default__start(void );



static inline error_t RFA1DriverLayerP__ExtAmpControl__default__stop(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
static /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__reset(void );
#line 43
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__set(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__size_type value);
#line 59
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__start(void );


static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__stop(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__fired(void );
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__get(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Init__init(void );










static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__fired(void );
#line 80
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__setAlarm(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type time);
#line 102
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type ndt);
#line 115
static inline /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__getNow(void );









static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__overflow(void );
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__reset(void );
#line 43
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__set(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__size_type value);
#line 59
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__start(void );


static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__stop(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__fired(void );
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__size_type /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__get(void );
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Init__init(void );










static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__fired(void );





static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__stop(void );










static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__setAlarm(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type time);
#line 102
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__start(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type ndt);
#line 125
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__overflow(void );
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static void /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 125 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static 
#line 123
void * 

/*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);







static inline void */*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2ace7258ec70, 
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2ace7258ec70, 
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2ace7258f990, 
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
#line 74
message_t * msg);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4361 {
#line 126
  AMQueueImplP__1__CancelTask = 17U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4362 {
#line 169
  AMQueueImplP__1__errorTask = 18U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4363 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 211
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 109
{
   __asm volatile ("cli" :  :  : "memory");}

#line 126
#line 125
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 135
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 125 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow(void )
#line 125
{
}

# 177 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 58 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper & /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 58 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
#line 82
  /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow(void )
{
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow();
}

# 125 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__overflow(void )
#line 125
{
}

#line 125
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__overflow(void )
#line 125
{
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 49
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__overflow();
#line 49
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__overflow();
#line 49
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow();
#line 49
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow();
#line 49
}
#line 49
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt == 0) 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 200 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id)
#line 200
{
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(uint8_t arg_0x2ace720cf998){
#line 78
  switch (arg_0x2ace720cf998) {
#line 78
    case /*TimerMilliP.AlarmMilli32C.MuxAlarm62khz32C*/MuxAlarm62khz32C__0__CLIENT_ID:
#line 78
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
      break;
#line 78
    default:
#line 78
      /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(arg_0x2ace720cf998);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 115 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__getNow(void )
{
  return /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get();
}

# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 139 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void )
#line 139
{
  uint8_t id;

  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = TRUE;

  for (id = 0; id < /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS; id++) {
      if (/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id]) {


          /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0 = /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0;
          /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow() - t0;

#line 150
          if (/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt <= elapsed) {
              /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
              /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(id);
            }
        }
    }

  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = FALSE;
}











static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void )
#line 170
{
  /* atomic removed: atomic calls only */
#line 171
  {
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms();
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
  }
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__fired(void ){
#line 78
  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__powerState = -1;
}

# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtmRfa1TimerMacP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 202 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 0);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareA__stop();
#line 62
}
#line 62
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired(void )
{
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop();
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__fired();
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareA__fired(void ){
#line 48
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired();
#line 48
}
#line 48
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

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void )
{
  return /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__get();
}

# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 112 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline bool HplAtmRfa1TimerMacP__Counter__test(void )
#line 112
{
#line 112
  return * (volatile uint8_t *)0xE0 & (1 << 3);
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__test(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtmRfa1TimerMacP__Counter__test();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void )
{
  /* atomic removed: atomic calls only */
#line 73
  {
    unsigned char __nesc_temp = 
#line 73
    /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__test();

#line 73
    return __nesc_temp;
  }
}

# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 183 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 183
{
  /* atomic removed: atomic calls only */
#line 184
  {
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 = t0;
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt = dt;
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = TRUE;
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
  }
}

# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.MuxAlarm62khz32C*/MuxAlarm62khz32C__0__CLIENT_ID, t0, dt);
#line 103
}
#line 103
# 195 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 0;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareA__start();
#line 59
}
#line 59
# 191 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__reset(void )
#line 191
{
#line 191
  * (volatile uint8_t *)0xE0 = 1 << 0;
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareA__reset();
#line 54
}
#line 54
# 168 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF8 = time.hh;
    * (volatile uint8_t *)0xF7 = time.hl;
    * (volatile uint8_t *)0xF6 = time.lh;
    * (volatile uint8_t *)0xF5 = time.ll;
  }
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__set(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareA__set(value);
#line 43
}
#line 43
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__setAlarm(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type time)
{
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__set(time);
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__reset();
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__start();
}

static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type nt0, /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type ndt)
{
  /* atomic removed: atomic calls only */
  {

    /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type n = /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get() + 2;


    if ((/*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type )(n - nt0) < ndt) {
      n = nt0 + ndt;
      }
    /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__setAlarm(n);
  }
}

# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop(void )
{
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop();
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop();
#line 73
}
#line 73
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 105 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei" :  :  : "memory");}

# 76 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  __nesc_enable_interrupt();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
        /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
        }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__fired(void ){
#line 78
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 282 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 1);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareB__stop();
#line 62
}
#line 62
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__fired(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__stop();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__fired();
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__fired();
#line 48
}
#line 48
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__start(dt);
#line 66
}
#line 66
# 111 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 321 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * 0.0625);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RFA1DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);


          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 63
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 115 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__getNow(void )
{
  return /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__get();
}

# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 88 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 344 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__RadioAlarm__fired(void )
{
}

# 102 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x2ace72c04df0){
#line 60
  switch (arg_0x2ace72c04df0) {
#line 60
    case 0U:
#line 60
      RFA1RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x2ace72c04df0);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 93 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 155 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 199 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RFA1RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 127 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 102 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__fired(uint8_t arg_0x2ace72c04df0){
#line 60
  switch (arg_0x2ace72c04df0) {
#line 60
    case 0U:
#line 60
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__default__fired(arg_0x2ace72c04df0);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 93 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__run(void )
{
  if (/*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state == /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_FIRED) 
    {
      /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state = /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_READY;
      /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__fired(/*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__alarm);
    }
}





static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 63
}
#line 63
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
inline static void RFA1DriverLayerP__RadioState__done(void ){
#line 69
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 268 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RFA1DriverLayerP__state != RFA1DriverLayerP__STATE_SLEEP) {



    * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;
    }

  if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
    RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
    }
  else {
#line 283
    RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
}

# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void RFA1DriverLayerP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 1075 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__ExtAmpControl__default__stop(void )
#line 1075
{
  return SUCCESS;
}

# 105 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t RFA1DriverLayerP__ExtAmpControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = RFA1DriverLayerP__ExtAmpControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 38 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline error_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__stop(void )
#line 38
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 39
    /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__lock = 0;
#line 39
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 105 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t RFA1DriverLayerP__RxModeLock__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 1071 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__ExtAmpControl__default__start(void )
#line 1071
{
  return SUCCESS;
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t RFA1DriverLayerP__ExtAmpControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RFA1DriverLayerP__ExtAmpControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 20 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.nc"
inline static uint8_t RFA1DriverLayerP__AntennaDiversityConfig__rxModeGet(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__rxModeGet();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 33 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline error_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__start(void )
#line 33
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 34
    /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__lock = 1;
#line 34
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t RFA1DriverLayerP__RxModeLock__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RxModeLock__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 288 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeState(void )
{
  uint8_t ant;

#line 291
  if ((RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON) && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP) 
    {
      for (; 0; ) ;

      * (volatile uint8_t *)0x14F = 0xFF;
      * (volatile uint8_t *)0x14E = 1 << 7;
      * (volatile uint8_t *)0x139 &= ~(1 << 1);
      RFA1DriverLayerP__McuPowerState__update();

      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 302
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        for (; 0; ) ;


        * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;

        * (volatile uint8_t *)0x14E = ((((1 << 0) | (1 << 6)) | (1 << 3)) | (1 << 2)) | (1 << 4);
        RFA1DriverLayerP__McuPowerState__update();






        RFA1DriverLayerP__RxModeLock__start();
        ant = RFA1DriverLayerP__AntennaDiversityConfig__rxModeGet();
        if (ant) {
            * (volatile uint8_t *)0x14D = ant;
            * (volatile uint8_t *)0x14A = (* (volatile uint8_t *)0x14A & 0xF0) | 7;
            * (volatile uint8_t *)(0x13 + 0x20) |= 1 << 1;
            if (ant == 2) {
                * (volatile uint8_t *)(0x14 + 0x20) |= 1 << 1;
              }
            else 
#line 325
              {
                * (volatile uint8_t *)(0x14 + 0x20) &= ~(1 << 1);
              }
          }
        else 
#line 328
          {
            * (volatile uint8_t *)0x14D = ((1 << 3) | (1 << 2)) | 1;
            * (volatile uint8_t *)0x14A = (* (volatile uint8_t *)0x14A & 0xF0) | 3;
          }


        * (volatile uint8_t *)0x142 = 6;
        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
        RFA1DriverLayerP__ExtAmpControl__start();
      }
    else {
#line 338
      if ((RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY) && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) 
        {









          * (volatile uint8_t *)0x14D = 3;

          * (volatile uint8_t *)(0x13 + 0x20) |= 1 << 1;
          * (volatile uint8_t *)(0x14 + 0x20) &= ~(1 << 1);
          RFA1DriverLayerP__RxModeLock__stop();


          * (volatile uint8_t *)0x142 = 3;

          * (volatile uint8_t *)0x14E = 0;
          RFA1DriverLayerP__radioIrq = RFA1DriverLayerP__IRQ_NONE;

          RFA1DriverLayerP__McuPowerState__update();

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
          RFA1DriverLayerP__ExtAmpControl__stop();
        }
      }
    }
#line 367
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
    {





      * (volatile uint8_t *)0x14D = 3;

      * (volatile uint8_t *)(0x13 + 0x20) |= 1 << 1;
      * (volatile uint8_t *)(0x14 + 0x20) &= ~(1 << 1);


      * (volatile uint8_t *)0x139 |= 1 << 1;
      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 384
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        * (volatile uint8_t *)0x14E = 0;
        RFA1DriverLayerP__McuPowerState__update();

        RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 297 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 223 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RFA1RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 292 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rfa1packet_header_t );
}

# 41 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = RFA1RadioP__RFA1DriverConfig__headerLength(msg);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 931 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg)
{

  return RFA1DriverLayerP__Config__headerLength(msg) + sizeof(rfa1_header_t );
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 93 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__headerLength(message_t *msg)
#line 93
{
  return /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 77 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_simple_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

#line 158
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 208 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RFA1RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 188 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 218 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RFA1RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 328 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RFA1RadioP__RadioAlarm__getNow();


  if (RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * 0.0625);
    }
  else {
#line 339
    time += (uint16_t )(32 * (-5 + 5) * 0.0625);
    }
  return time;
}

# 57 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 37 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAddressRecognitionLayerC.nc"
static inline message_t */*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__receive(message_t *msg)
{
  return /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RadioReceive__receive(msg);
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__get(message_t *msg)
#line 83
{
  return /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__getMeta(msg)->ant_id;
}

# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
inline static RFA1RadioP__PacketAntenna__value_type RFA1RadioP__PacketAntenna__get(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__get(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
#line 55
inline static void RFA1RadioP__PacketAntenna__set(message_t *msg, RFA1RadioP__PacketAntenna__value_type value){
#line 55
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__set(msg, value);
#line 55
}
#line 55
# 30 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.nc"
inline static uint8_t RFA1RadioP__AntennaDiversityConfig__txModeGet(void ){
#line 30
  unsigned char __nesc_result;
#line 30

#line 30
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__txModeGet();
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 327 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RFA1DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 101 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
#line 101
{
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 115 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 118
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 174 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{

  uint8_t txMode;

  RFA1RadioP__Ieee154PacketLayer__createAckReply(data, ack);

  txMode = RFA1RadioP__AntennaDiversityConfig__txModeGet();
  if (txMode & ANTDIV_TXMODE_EX_MASK) {
      RFA1RadioP__PacketAntenna__set(ack, txMode & 0x01);
    }
  else 
#line 184
    {
      RFA1RadioP__PacketAntenna__set(ack, RFA1RadioP__PacketAntenna__get(data));
    }
}

# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RFA1RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 131 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline bool RFA1RadioP__RFA1DriverConfig__isAckEnabled(void )
#line 131
{

  bool retV;

#line 134
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      retV = RFA1RadioP__ackEnable;
    }
#line 136
    __nesc_atomic_end(__nesc_atomic); }
  return retV;
}

#line 165
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{

  return RFA1RadioP__RFA1DriverConfig__isAckEnabled() && RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 90 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RFA1RadioP__RFA1DriverConfig__metadataLength(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 957 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RFA1DriverLayerP__Config__metadataLength(msg) + sizeof(rfa1_metadata_t );
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RFA1DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__metadataLength(message_t *msg)
#line 109
{
  return /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__metadataLength(msg) + sizeof(antdiv_metadata_t );
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}








static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 362 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 2);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareC__stop();
#line 62
}
#line 62
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__stop(void )
{
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__stop();
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__stop(void ){
#line 73
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__stop();
#line 73
}
#line 73
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__stop();
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state = /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_READY;
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__cancel(0U);
#line 55
}
#line 55
# 124 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 155 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RFA1RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RFA1RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 150 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 153 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  for (; 0; ) ;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) 
    {
      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg)) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg);



          if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
#line 166
            return msg;
            }
#line 167
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
        }

      return msg;
    }

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 182
        for (; 0; ) ;
        }
    }
  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 1057 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RFA1DriverLayerP__getMeta(msg)->lqi = value;
}

# 312 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 185 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 113 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline bool RFA1RadioP__RFA1DriverConfig__isAddressRecognitionEnabled(void )
#line 113
{

  bool retV;

#line 116
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      retV = RFA1RadioP__addressRecognition;
    }
#line 118
    __nesc_atomic_end(__nesc_atomic); }
  return retV;
}

# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RFA1DriverConfig__isAddressRecognitionEnabled(void ){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RFA1RadioP__RFA1DriverConfig__isAddressRecognitionEnabled();
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 29 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAddressRecognitionLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RFA1DriverConfig__isAddressRecognitionEnabled() && !/*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
#line 32
    return FALSE;
    }
  return /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__RadioReceive__header(msg);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.SoftwareAddressRecognitionLayerC*/SoftwareAddressRecognitionLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RFA1Packet__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RFA1DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 137 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
    }

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RFA1Packet__payloadLength(msg) < sizeof(rfa1packet_header_t ) - sizeof(rfa1_header_t )) {
#line 144
    return FALSE;
    }




  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 101 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__Config__headerLength(msg);
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void )
{

  ({
#line 86
    extern int __attribute((error("static assertion failure: ""\"invalid packet size, TOSH_DATA_LENGTH overflow\""))) __static_check_0_86(void );

#line 86
    sizeof(rfa1packet_header_t ) + 28 <= 126 ? 0 : __static_check_0_86(), 0;
  }
  );
#line 87
  return sizeof(rfa1packet_header_t ) + 28;
}

# 47 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__RFA1DriverConfig__maxPayloadLength();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 950 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RFA1DriverLayerP__Config__maxPayloadLength() - sizeof(rfa1_header_t );
}

#line 602
static __inline void RFA1DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  bool sendSignal = FALSE;

  length = * (volatile uint8_t *)0x17B;

  if (* (volatile uint8_t *)0x146 & (1 << 7) && length >= 3 && length <= RFA1DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t *data;

      data = RFA1DriverLayerP__getPayload(RFA1DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(RFA1DriverLayerP__rxMsg)->length.nxdata, length);


      length -= 2;


      memcpy(data, (void *)& * (volatile uint8_t *)0x180, length);

      if (RFA1DriverLayerP__RadioReceive__header(RFA1DriverLayerP__rxMsg)) 
        {
          RFA1DriverLayerP__PacketLinkQuality__set(RFA1DriverLayerP__rxMsg, (uint8_t )*(& * (volatile uint8_t *)0x180 + * (volatile uint8_t *)0x17B));
          sendSignal = TRUE;
        }
    }

  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
#line 647
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;


  if (sendSignal) {
    RFA1DriverLayerP__rxMsg = RFA1DriverLayerP__RadioReceive__receive(RFA1DriverLayerP__rxMsg);
    }
}

#line 597
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error)
#line 597
{
}

# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RFA1DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RFA1DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(4U, msg);
#line 55
}
#line 55
# 1002 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RFA1DriverLayerP__RSSIFlag__clear(msg);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 87 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__clear(message_t *msg)
#line 87
{
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__clear(msg);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
inline static void RFA1DriverLayerP__PacketAntenna__clear(message_t *msg){
#line 49
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__clear(msg);
#line 49
}
#line 49
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 77 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(4U, msg);
#line 50
}
#line 50





inline static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 1007 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RFA1DriverLayerP__TransmitPowerFlag__clear(msg);

  RFA1DriverLayerP__RSSIFlag__set(msg);
  RFA1DriverLayerP__getMeta(msg)->rssi = value;
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
inline static void RFA1DriverLayerP__PacketAntenna__set(message_t *msg, RFA1DriverLayerP__PacketAntenna__value_type value){
#line 55
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__set(msg, value);
#line 55
}
#line 55
# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__set(message_t * msg, RFA1DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 194 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(1000 * 0.0625);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 355 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 2;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareC__start();
#line 59
}
#line 59
# 351 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__reset(void )
#line 351
{
#line 351
  * (volatile uint8_t *)0xE0 = 1 << 2;
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareC__reset();
#line 54
}
#line 54
# 328 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF0 = time.hh;
    * (volatile uint8_t *)0xEF = time.hl;
    * (volatile uint8_t *)0xEE = time.lh;
    * (volatile uint8_t *)0xED = time.ll;
  }
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__set(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareC__set(value);
#line 43
}
#line 43
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__setAlarm(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type time)
{
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__set(time);
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__reset();
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__start();
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__size_type /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__start(/*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type ndt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__size_type n = /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCounter__get();


      n += 2 > ndt ? 2 : ndt;

      /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__setAlarm(n);
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__start(/*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__size_type dt){
#line 66
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__start(dt);
#line 66
}
#line 66
# 111 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__alarm = id;
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state = /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_WAIT;
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__start(timeout);
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__wait(0U, timeout);
#line 50
}
#line 50
# 106 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__isFree(uint8_t id)
{
  return /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state == /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_READY;
}

# 45 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__RadioAlarm__isFree(0U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 198 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 145 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 393 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE9;
    time.lh = * (volatile uint8_t *)0xEA;
    time.hl = * (volatile uint8_t *)0xEB;
    time.hh = * (volatile uint8_t *)0xEC;
  }

  return time.full;
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
inline static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__SfdCapture__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 666 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__serviceRadio(void )
{
  uint32_t time;
  uint8_t irq;
  uint8_t temp;
  uint8_t ant;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time = RFA1DriverLayerP__SfdCapture__get();
      irq = RFA1DriverLayerP__radioIrq;
      RFA1DriverLayerP__radioIrq = RFA1DriverLayerP__IRQ_NONE;
    }
#line 678
    __nesc_atomic_end(__nesc_atomic); }









  if ((irq & RFA1DriverLayerP__IRQ_PLL_LOCK) != 0) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 697
        if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT) {
          for (; 0; ) ;
          }
        else {
#line 699
          if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CAL) {
              for (; 0; ) ;
              RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
              RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
            }
          else {
            for (; 0; ) ;
            }
          }
        }
    }
#line 708
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT && (irq & RFA1DriverLayerP__IRQ_TX_END) != 0) 
    {
      for (; 0; ) ;



      ant = RFA1DriverLayerP__AntennaDiversityConfig__rxModeGet();
      if (ant) {

          if (ant == 2) {
              * (volatile uint8_t *)(0x14 + 0x20) |= 1 << 1;
            }
          else 
#line 719
            {
              * (volatile uint8_t *)(0x14 + 0x20) &= ~(1 << 1);
            }
        }


      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;


      RFA1DriverLayerP__RadioSend__sendDone(SUCCESS);


      for (; 0; ) ;
    }

  if ((irq & RFA1DriverLayerP__IRQ_RX_START) != 0) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {
          RFA1DriverLayerP__RadioCCA__done(FAIL);
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
        }

      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE) 
        {
          for (; 0; ) ;


          if (irq == RFA1DriverLayerP__IRQ_RX_START) 
            {
              temp = * (volatile uint8_t *)0x146 & RFA1_RSSI_MASK;
              RFA1DriverLayerP__rssiBusy += temp - (RFA1DriverLayerP__rssiBusy >> 2);

              RFA1DriverLayerP__PacketTimeStamp__set(RFA1DriverLayerP__rxMsg, time);


              if (* (volatile uint8_t *)0x14D & (1 << 2)) {

                  RFA1DriverLayerP__PacketAntenna__set(RFA1DriverLayerP__rxMsg, * (volatile uint8_t *)0x14D & (1 << 7));
                }
              else 
#line 759
                {
                  RFA1DriverLayerP__PacketAntenna__set(RFA1DriverLayerP__rxMsg, !((* (volatile uint8_t *)(0x14 + 0x20) & (1 << 1)) != 0));
                }



              RFA1DriverLayerP__PacketRSSI__set(RFA1DriverLayerP__rxMsg, temp);
            }
          else 

            {
              RFA1DriverLayerP__PacketTimeStamp__clear(RFA1DriverLayerP__rxMsg);

              RFA1DriverLayerP__PacketAntenna__clear(RFA1DriverLayerP__rxMsg);



              RFA1DriverLayerP__PacketRSSI__clear(RFA1DriverLayerP__rxMsg);
            }


          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_RECEIVE;
        }
      else {
        for (; 0; ) ;
        }
    }
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_RECEIVE && (irq & RFA1DriverLayerP__IRQ_RX_END) != 0) 
    {
      for (; 0; ) ;


      RFA1DriverLayerP__rssiClear += (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) - (RFA1DriverLayerP__rssiClear >> 2);

      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_DOWNLOAD;
    }

  if ((irq & RFA1DriverLayerP__IRQ_AWAKE) != 0) {
      if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF && (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON)) {
        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
      else {
#line 800
        for (; 0; ) ;
        }
    }
  if ((irq & RFA1DriverLayerP__IRQ_CCA_ED_DONE) != 0) {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {




          * (volatile uint8_t *)0x155 &= ~(1 << 7);


          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;

          for (; 0; ) ;
          for (; 0; ) ;

          RFA1DriverLayerP__RadioCCA__done(* (volatile uint8_t *)0x141 & 7 ? * (volatile uint8_t *)0x141 & 6 ? SUCCESS : EBUSY : FAIL);
        }
      else {
        for (; 0; ) ;
        }
    }
}

#line 893
static inline void RFA1DriverLayerP__Tasklet__run(void )
{
  if (RFA1DriverLayerP__radioIrq != RFA1DriverLayerP__IRQ_NONE) {
    RFA1DriverLayerP__serviceRadio();
    }
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_DOWNLOAD) {
        RFA1DriverLayerP__downloadMessage();
        }
      else {
#line 902
        if (RFA1DriverLayerP__CMD_TURNOFF <= RFA1DriverLayerP__cmd && RFA1DriverLayerP__cmd <= RFA1DriverLayerP__CMD_TURNON) {
          RFA1DriverLayerP__changeState();
          }
        else {
#line 904
          if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) {
            RFA1DriverLayerP__changeChannel();
            }
          }
        }
#line 907
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
          RFA1DriverLayerP__RadioState__done();
        }
    }

  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON && !RFA1DriverLayerP__radioIrq) {
    RFA1DriverLayerP__RadioSend__ready();
    }
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RFA1DriverLayerP__Tasklet__run();
#line 48
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__run();
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 50 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(2U, msg);
#line 50
}
#line 50
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 73
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 212 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

#line 168
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 217 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(3U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 969 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->power;
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverConfig.nc"
inline static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1RadioP__RFA1DriverConfig__requiresRssiCca(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(5U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 1018 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TimeSyncFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RFA1DriverLayerP__RadioPacket__headerLength(msg) + RFA1DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 74 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline bool /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__isSet(message_t *msg)
#line 74
{
  return /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__get(msg);
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
inline static bool RFA1DriverLayerP__PacketAntenna__isSet(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__isSet(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40




inline static RFA1DriverLayerP__PacketAntenna__value_type RFA1DriverLayerP__PacketAntenna__get(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__get(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 30 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityConfig.nc"
inline static uint8_t RFA1DriverLayerP__AntennaDiversityConfig__txModeGet(void ){
#line 30
  unsigned char __nesc_result;
#line 30

#line 30
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__txModeGet();
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/LocalTime.nc"
inline static uint32_t RFA1DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 347 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

# 275 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 1;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareB__start();
#line 59
}
#line 59
# 271 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__reset(void )
#line 271
{
#line 271
  * (volatile uint8_t *)0xE0 = 1 << 1;
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareB__reset();
#line 54
}
#line 54
# 248 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF4 = time.hh;
    * (volatile uint8_t *)0xF3 = time.hl;
    * (volatile uint8_t *)0xF2 = time.lh;
    * (volatile uint8_t *)0xF1 = time.ll;
  }
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__set(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareB__set(value);
#line 43
}
#line 43
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__setAlarm(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type time)
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__set(time);
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__reset();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__start();
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 303 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * 0.0625);
}

# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 76 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__fired(void )
{
  __nesc_enable_interrupt();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state == /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_WAIT) {
        /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__state = /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__STATE_FIRED;
        }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Tasklet__schedule();
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__fired(void ){
#line 78
  /*RFA1RadioC.SoftwareAckRadioAlarmC.RadioAlarmP*/RadioAlarmP__1__Alarm__fired();
#line 78
}
#line 78
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__fired(void )
{
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__stop();
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Alarm__fired();
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareC__fired(void ){
#line 48
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__fired();
#line 48
}
#line 48
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
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(uint8_t bit)
#line 50
{
#line 50
  * (volatile uint8_t * )37U |= 1 << bit;
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(7);
#line 40
}
#line 40
inline static void LedsP__Led1__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(6);
#line 40
}
#line 40
inline static void LedsP__Led0__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(5);
#line 40
}
#line 40
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )36U |= 1 << bit;
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(7);
#line 46
}
#line 46
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(6);
#line 46
}
#line 46
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(5);
#line 46
}
#line 46
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
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
# 15 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/WatchDogP.nc"
static inline error_t WatchDogP__WDInit__init(void )
#line 15
{
   __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");
   __asm volatile ("in __tmp_reg__,__SREG__""\n\t""cli""\n\t""wdr""\n\t""sts %0,%1""\n\t""out __SREG__,__tmp_reg__""\n\t""sts %0,%2""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((1 << 4) | (1 << 3)), "r"((uint8_t )(((9 & 0x08 ? 1 << 5 : 0x00) | (1 << 3)) | (9 & 0x07))) : "r0");
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__WDInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = WatchDogP__WDInit__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 38 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void )
#line 38
{
  if (!1U) {
      * (volatile uint8_t *)0x139 |= 1 << 1;
    }
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__RadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioOffP__RFA1RadioOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 101 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__AdcInit__default__init(void )
#line 101
{
#line 101
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__AdcInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__AdcInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 213 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 0))
     | ((mode & 0x1) << 0);
  }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareA__setMode(mode);
#line 70
}
#line 70
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init(void )
{
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop();
  /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__setMode(0);

  return SUCCESS;
}

# 118 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 3;
}

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__start(void ){
#line 61
  HplAtmRfa1TimerMacP__Counter__start();
#line 61
}
#line 61
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode)
{
  mode &= (1 << 5) | (1 << 4);


  if ((mode & (1 << 4)) != 0) {
    * (volatile uint8_t *)0xB6 = 1 << 5;
    }
  /* atomic removed: atomic calls only */
#line 140
  * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~((1 << 5) | (1 << 4))) | mode;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1TimerMacP__Counter__setMode(mode);
#line 72
}
#line 72
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void )
{
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__setMode(48);
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__start();

  return SUCCESS;
}

# 81 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__start(void )
{
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__start(void ){
#line 61
  HplAtmRfa1Timer1P__Timer__start();
#line 61
}
#line 61
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0x80 = (* (volatile uint8_t *)0x80 & ~(0x3 << 0))
     | (((mode >> 3) & 0x3) << 0);

    * (volatile uint8_t *)0x81 = ((* (volatile uint8_t *)0x81 & ~((0x3 << 3) | (0x7 << 0)))
     | (((mode >> 5) & 0x3) << 3))
     | (((mode >> 0) & 0x7) << 0);
  }
}

# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1Timer1P__Timer__setMode(mode);
#line 72
}
#line 72
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void )
{
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__setMode(2);
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__start();

  return SUCCESS;
}

# 293 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 1))
     | ((mode & 0x1) << 1);
  }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareB__setMode(mode);
#line 70
}
#line 70
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Init__init(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__stop();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCompare__setMode(0);

  return SUCCESS;
}

# 373 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 2))
     | ((mode & 0x1) << 2);
  }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareC__setMode(mode);
#line 70
}
#line 70
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Init__init(void )
{
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__stop();
  /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__HplAtmegaCompare__setMode(0);

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*RFA1DriverLayerC.SoftAckAlarmC.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__2__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*MuxAlarm62khz32C_.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 72
{
  /* atomic removed: atomic calls only */


  {
    uint8_t wraps_ok = 0;
    uint8_t wraps = 255;
    uint16_t now;
    uint16_t prev_cycles_min = 0xffff;
    uint16_t prev_cycles_max = 0;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = 1 << 0;


    while (wraps_ok < 50 && --wraps != 0) 
      {
        while (* (volatile uint8_t *)0xB2 != 0) 
          ;

        now = * (volatile uint16_t *)0x84;

        while (* (volatile uint8_t *)0xB2 != 64) 
          ;

        MeasureClockC__cycles = * (volatile uint16_t *)0x84 - now;

        if (prev_cycles_min < MeasureClockC__cycles) {
          prev_cycles_min = MeasureClockC__cycles;
          }
#line 103
        if (prev_cycles_max > MeasureClockC__cycles) {
          prev_cycles_max = MeasureClockC__cycles;
          }
        if (prev_cycles_max - prev_cycles_min <= 1) {
            wraps_ok++;
          }
        else 
#line 108
          {
            wraps_ok = 0;
            prev_cycles_min = 0xffff;
            prev_cycles_max = 0;
          }
      }


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    while (* (volatile uint8_t *)0xB6 & ((1 << 1) | (1 << 0))) 
      ;
  }

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void )
{
  /* atomic removed: atomic calls only */

  {

    * (volatile uint8_t *)0x61 = 0x80;




    * (volatile uint8_t *)0x61 = 0x00;
  }










  return SUCCESS;
}

static inline error_t McuInitP__Init__init(void )
{
  error_t ok;

#line 80
  * (volatile uint8_t *)0x135 |= 1 << 4;
  * (volatile uint8_t *)0x134 |= 1 << 4;
  * (volatile uint8_t *)0x133 |= 1 << 4;
  * (volatile uint8_t *)0x132 |= 1 << 4;

  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;




  ok = McuInitP__systemClockInit();
  ok = ecombine(ok, McuInitP__MeasureClock__init());
  ok = ecombine(ok, McuInitP__TimerInit__init());
  ok = ecombine(ok, McuInitP__AdcInit__init());
  ok = ecombine(ok, McuInitP__RadioInit__init());

  return ok;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__McuInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;

  ok = PlatformP__McuInit__init();
  ok = ecombine(ok, PlatformP__WDInit__init());
  ok = ecombine(ok, PlatformP__LedsInit__init());

  return ok;
}

# 179 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__PlatformInit__init(void )
{
  RFA1DriverLayerP__rxMsg = &RFA1DriverLayerP__rxMsgBuffer;


  RFA1DriverLayerP__rssiClear = 0;
  RFA1DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
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
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  TestUsbStationC__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 215 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0x2ace7258f990, message_t * msg, error_t error){
#line 100
  switch (arg_0x2ace7258f990) {
#line 100
    case 0U:
#line 100
      /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0x2ace7258f990, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Queue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 132
{
  return 28;
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 73
{
}

#line 69
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void )
#line 69
{
  return /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__head];
}

#line 89
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 89
{
  /*PrintfC.QueueC*/QueueC__0__queue_t t = /*PrintfC.QueueC*/QueueC__0__Queue__head();

#line 91
  ;
  if (!/*PrintfC.QueueC*/QueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/QueueC__0__head++;
      if (/*PrintfC.QueueC*/QueueC__0__head == 250) {
#line 94
        /*PrintfC.QueueC*/QueueC__0__head = 0;
        }
#line 95
      /*PrintfC.QueueC*/QueueC__0__size--;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Queue.nc"
inline static PrintfP__Queue__t  PrintfP__Queue__dequeue(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 315 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 61
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 159
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 159
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 161
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 286 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 178 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 178
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 180
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x2ace7258ec70, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x2ace7258ec70, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 128 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 128
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 304 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static inline  uint8_t __nesc_bf_decode8(const uint8_t *msg, unsigned offset, uint8_t length)
#line 304
{
#line 304
  uint8_t x = 0;
#line 304
  unsigned byte_offset = offset >> 3;
#line 304
  unsigned bit_offset = offset & 7;

#line 304
  if (length + bit_offset <= 8) {
#line 304
    return (msg[byte_offset] >> (8 - bit_offset - length)) & ((1 << length) - 1);
    }
#line 304
  if (bit_offset > 0) {
#line 304
      length -= 8 - bit_offset;
#line 304
      x = (uint8_t )(msg[byte_offset] & ((1 << (8 - bit_offset)) - 1)) << length;
#line 304
      byte_offset++;
    }
#line 304
  while (length >= 8) {
#line 304
      length -= 8;
#line 304
      x |= (uint8_t )msg[byte_offset++] << length;
    }
#line 304
  if (length > 0) {
#line 304
    x |= msg[byte_offset] >> (8 - length);
    }
#line 304
  return x;
}

#line 304
static __inline  uint8_t __nesc_ntohbf_uint8(const void *source, unsigned offset, uint8_t length)
#line 304
{
#line 304
  return __nesc_bf_decode8(source, offset, length);
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 557 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__startSend(uint8_t proto, uint8_t b)
#line 557
{
  bool not_busy = FALSE;

#line 559
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 559
    {
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 561
          EOFF;

          {
#line 561
            __nesc_atomic_end(__nesc_atomic); 
#line 561
            return __nesc_temp;
          }
        }
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }
#line 563
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 563
    {
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX].state == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_AVAILABLE) {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX].state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_FILLING;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX].buf = b;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProtoPending = proto;
          not_busy = TRUE;
        }
    }
#line 570
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t proto, uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__startSend(proto, first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 483 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 484
{
  return 0;
}

# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x2ace727688e8, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x2ace727688e8) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x2ace727688e8, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 480 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 480
{
  return 0;
}

# 15 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x2ace727688e8){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x2ace727688e8) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x2ace727688e8);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 120
{
  error_t err;
  serial_metadata_t *meta;
  uint8_t sendProto;
  uint8_t sendControl;

  meta = (serial_metadata_t *)msg->metadata;
  __nesc_hton_uint8(meta->ack.nxdata, FALSE);
  sendProto = SERIAL_PROTO_PACKET_NOACK;
  if (1 == TOS_SERIAL_SERVERLINK_TYPE) {
      if (__nesc_ntoh_uint8(meta->proto.nxdata) == SERIAL_PROTO_PACKET_ACK) {
          sendProto = SERIAL_PROTO_PACKET_ACK;
        }
      if (__nesc_ntoh_uint8(meta->isControl.nxdata)) {
          sendControl = (uint8_t )(__nesc_ntohbf_uint8((unsigned char *)&meta->control, 0, 2) << 6);
          sendControl = sendControl | (__nesc_ntohbf_uint8((unsigned char *)&meta->control, 2, 2) << 4);
          sendControl = sendControl | __nesc_ntohbf_uint8((unsigned char *)&meta->control, 4, 4);
          __nesc_hton_uint8(meta->isControl.nxdata, FALSE);
        }
      else 
#line 138
        {
          sendControl = 0;
        }
    }
  else 
#line 141
    {
      ({
#line 142
        extern int __attribute((error("static assertion failure: ""\"invlaid serial_type, should be TOS_SERIAL_CLASSICAL_TYPE or TOS_SERIAL_SERVERLINK_TYPE\""))) __static_check_0_142(void );

#line 142
        1 == TOS_SERIAL_CLASSICAL_TYPE ? 0 : __static_check_0_142(), 0;
      }
      );
#line 143
      sendControl = id;
    }


  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendTaskPending = FALSE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 155
            ESIZE;

            {
#line 155
              __nesc_atomic_end(__nesc_atomic); 
#line 155
              return __nesc_temp;
            }
          }
        }
#line 158
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 170
    __nesc_atomic_end(__nesc_atomic); }
  if ((err = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(sendProto, sendControl)) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return err == EOFF ? EOFF : FAIL;
    }
}

# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 169 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail >= 1U) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2ace72d10020){
#line 53
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x2ace72d10020);
#line 53
}
#line 53
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 120
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 164 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2ace72d0e538){
#line 59
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x2ace72d0e538);
#line 59
}
#line 59
# 162 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2ace72d10020){
#line 61
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2ace72d10020);
#line 61
}
#line 61
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 123 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SendNotifier.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0x2ace72c2e2f0, am_addr_t dest, message_t * msg){
#line 59
    /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0x2ace72c2e2f0, dest, msg);
#line 59
}
#line 59
# 183 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 237 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RFA1RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RFA1RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 189 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 154 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 68 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

#line 209
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 173 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

# 173 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 257 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RFA1RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RFA1RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 219 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

# 50 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 168 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}

# 193 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 247 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RFA1RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RFA1RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 199 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 292 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_simple_header_t ));
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 240 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 272
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 97 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 262 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RFA1RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RFA1RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 105 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__maxPayloadLength(void )
#line 105
{
  return /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 297 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_simple_header_t );
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 245 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

#line 277
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

#line 80
static inline error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0x2ace7258ec70, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(arg_0x2ace7258ec70, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RFA1DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 97 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static inline uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__payloadLength(message_t *msg)
#line 97
{
  return /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 287 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 159 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 235 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 267
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 141 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 232 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 184 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 204 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 147 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

# 79 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 94 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    ++TaskletC__state;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 230 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 213 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RFA1RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RFA1RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/home/wangqi/platforms2013/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 166 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2ace72d0e538){
#line 65
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2ace72d0e538);
#line 65
}
#line 65
# 89 "/home/wangqi/platforms2013/tinyos-main/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 150 "TestUsbStationC.nc"
static inline void TestUsbStationC__RadioChannel__setChannelDone(void )
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  TestUsbStationC__RadioChannel__setChannelDone();
#line 48
}
#line 48
# 49 "TestUsbStationC.nc"
static inline void TestUsbStationC__AMControl__stopDone(error_t error)
{
}

# 138 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  TestUsbStationC__AMControl__stopDone(error);
#line 138
}
#line 138
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(uint8_t bit)
#line 51
{
#line 51
  * (volatile uint8_t * )37U &= ~(1 << bit);
}

# 41 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(7);
#line 41
}
#line 41
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

#line 94
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 41 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(6);
#line 41
}
#line 41
# 89 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

#line 79
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 41 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(5);
#line 41
}
#line 41
# 74 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

#line 136
static inline void LedsP__Leds__set(uint8_t val)
#line 136
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      if (val & LEDS_LED0) {
          LedsP__Leds__led0On();
        }
      else {
          LedsP__Leds__led0Off();
        }
      if (val & LEDS_LED1) {
          LedsP__Leds__led1On();
        }
      else {
          LedsP__Leds__led1Off();
        }
      if (val & LEDS_LED2) {
          LedsP__Leds__led2On();
        }
      else {
          LedsP__Leds__led2Off();
        }
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
inline static void TestUsbStationC__Leds__set(uint8_t val){
#line 134
  LedsP__Leds__set(val);
#line 134
}
#line 134
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t TestUsbStationC__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
}

# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 154 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void TestUsbStationC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 36 "TestUsbStationC.nc"
static inline void TestUsbStationC__AMControl__startDone(error_t error)
{
  if (error == SUCCESS) 
    {
      TestUsbStationC__Timer0__startPeriodic(TIMER_PERIOD_MILLI);
    }
  else 
    {
      TestUsbStationC__AMControl__start();
      TestUsbStationC__Leds__set(0xff);
    }
}

# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  TestUsbStationC__AMControl__startDone(error);
#line 113
}
#line 113
# 144 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RFA1DriverLayerP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 419 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void )
{
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 423
    if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 425
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TURNON;
  RFA1DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RFA1DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Ieee154Send.nc"
inline static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 189 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x2ace72c31020, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0x2ace72c31020, msg, error);
#line 110
}
#line 110
# 99 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 127 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 312 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * 0.0625);
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 98 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 189 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 96 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 91 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 185 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 159 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x2ace72c2dbb0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x2ace72c2dbb0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 154 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 156
  ;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x2ace72c30ca0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x2ace72c30ca0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 149 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0x2ace72c2d020, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0x2ace72c2d020, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 310 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 94 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
inline static void TestUsbStationC__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
#line 89
inline static void TestUsbStationC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
#line 77
inline static void TestUsbStationC__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
#line 72
inline static void TestUsbStationC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
#line 61
inline static void TestUsbStationC__Leds__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
#line 56
inline static void TestUsbStationC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 250 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__RadioState__setChannel(uint8_t c)
{

  if (c < 11 || c > 26) {
    return FAIL;
    }
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 258
    if (RFA1DriverLayerP__channel == c) {
      return EALREADY;
      }
    }
#line 261
  RFA1DriverLayerP__channel = c;
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_CHANNEL;
  RFA1DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__setChannel(uint8_t channel){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RFA1DriverLayerP__RadioState__setChannel(channel);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 118 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannel(uint8_t channel)
{
  error_t error;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__setChannel(channel);

      if (error == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL;
        }
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
inline static error_t TestUsbStationC__RadioChannel__setChannel(uint8_t channel){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannel(channel);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 245 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioState__getChannel(void )
{
  return RFA1DriverLayerP__channel;
}

# 74 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
inline static uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__getChannel(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = RFA1DriverLayerP__RadioState__getChannel();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 139 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__getChannel(void )
{
  return /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__getChannel();
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
inline static uint8_t TestUsbStationC__RadioChannel__getChannel(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__getChannel();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 997 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__PacketRSSI__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->rssi;
}

# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
inline static TestUsbStationC__PacketRSSI__value_type TestUsbStationC__PacketRSSI__get(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = RFA1DriverLayerP__PacketRSSI__get(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__RSSIFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 992 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketRSSI__isSet(message_t *msg)
{
  return RFA1DriverLayerP__RSSIFlag__get(msg);
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
inline static bool TestUsbStationC__PacketRSSI__isSet(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1DriverLayerP__PacketRSSI__isSet(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 80 "TestUsbStationC.nc"
static inline message_t *TestUsbStationC__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
  uint8_t channelnum;

  if (len == sizeof(CountStruct )) 
    {
      CountStruct *receivepkt = (CountStruct *)payload;

      if (TestUsbStationC__PacketRSSI__isSet(msg)) 
        {
          __nesc_hton_uint16(receivepkt->RSSI.nxdata, (short )TestUsbStationC__PacketRSSI__get(msg));
        }



      channelnum = TestUsbStationC__RadioChannel__getChannel();

      printf("channel:%d count:%d RSSI:%d\n", channelnum, __nesc_ntoh_uint16(receivepkt->counter.nxdata), __nesc_ntoh_uint16(receivepkt->RSSI.nxdata));
      printfflush();

      if (++channelnum >= 20) {
#line 100
        channelnum = 11;
        }
#line 101
      TestUsbStationC__RadioChannel__setChannel(channelnum);

      if (__nesc_ntoh_uint16(receivepkt->counter.nxdata) & 0x01) 
        {
          TestUsbStationC__Leds__led0On();
        }
      else 
        {
          TestUsbStationC__Leds__led0Off();
        }
      if (__nesc_ntoh_uint16(receivepkt->counter.nxdata) & 0x02) 
        {
          TestUsbStationC__Leds__led1On();
        }
      else 
        {
          TestUsbStationC__Leds__led1Off();
        }
      if (__nesc_ntoh_uint16(receivepkt->counter.nxdata) & 0x04) 
        {
          TestUsbStationC__Leds__led2On();
        }
      else 
        {
          TestUsbStationC__Leds__led2Off();
        }
      return msg;
    }
  else 
    {
      return msg;
    }
}

# 144 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 146
  ;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x2ace72c30158, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2ace72c30158) {
#line 78
    case 6:
#line 78
      __nesc_result = TestUsbStationC__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x2ace72c30158, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 178 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 181
  return addr == /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

#line 164
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__default__catch(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 164
{
}

# 16 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Sniff.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__catch(am_id_t arg_0x2ace72c2f788, message_t * msg, void * payload, uint8_t len){
#line 16
    /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__default__catch(arg_0x2ace72c2f788, msg, payload, len);
#line 16
}
#line 16
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 129
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Sniff__catch(id, msg, payload, len);

  msg = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 68 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 158 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x2ace72d12e30){
#line 102
  switch (arg_0x2ace72d12e30) {
#line 102
    case 0U:
#line 102
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x2ace72d12e30);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 114 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 114
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x2ace725ec508, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x2ace725ec508, msg, error);
#line 110
}
#line 110
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 102
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 498 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 498
{
  return;
}

# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x2ace72769020, message_t * msg, error_t error){
#line 100
  switch (arg_0x2ace72769020) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x2ace72769020, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 159 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 194 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 194
{
  error_t error;
  uint8_t taskPending;

#line 197
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      taskPending = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendTaskPending;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendTaskPending = FALSE;
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA || taskPending == FALSE) {
#line 201
    return;
    }
  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, ECANCEL);
    }
  else 
#line 207
    {
      if (1 == TOS_SERIAL_SERVERLINK_TYPE) {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__startOneShot(2);
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ackPending = TRUE;
        }
      else 
#line 211
        {
          ({
#line 212
            extern int __attribute((error("static assertion failure: ""\"invlaid serial_type, should be TOS_SERIAL_CLASSICAL_TYPE or TOS_SERIAL_SERVERLINK_TYPE\""))) __static_check_1_212(void );

#line 212
            1 == TOS_SERIAL_CLASSICAL_TYPE ? 0 : __static_check_1_212(), 0;
          }
          );
#line 213
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 214
            error = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 214
            __nesc_atomic_end(__nesc_atomic); }
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
        }
    }
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 123 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 123
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 125
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 304 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static inline  void __nesc_bf_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)
#line 304
{
#line 304
  unsigned byte_offset = offset >> 3;
#line 304
  unsigned bit_offset = offset & 7;

#line 304
  x = x & (((uint8_t )1 << length) - 1);
#line 304
  if (length + bit_offset <= 8) {
#line 304
      unsigned mask = ((1 << length) - 1) << (8 - bit_offset - length);

#line 304
      msg[byte_offset] = (msg[byte_offset] & ~mask) | (x << (8 - bit_offset - length));
#line 304
      return;
    }
#line 304
  if (bit_offset > 0) {
#line 304
      unsigned mask = (1 << (8 - bit_offset)) - 1;

#line 304
      length -= 8 - bit_offset;
#line 304
      msg[byte_offset] = (msg[byte_offset] & ~mask) | (x >> length);
#line 304
      byte_offset++;
    }
#line 304
  while (length >= 8) {
#line 304
      length -= 8;
#line 304
      msg[byte_offset++] = x >> length;
    }
#line 304
  if (length > 0) {
#line 304
      unsigned mask = (1 << (8 - length)) - 1;

#line 304
      msg[byte_offset] = (msg[byte_offset] & mask) | (x << (8 - length));
    }
}

#line 304
static __inline  uint8_t __nesc_htonbf_uint8(void *target, unsigned offset, uint8_t length, uint8_t value)
#line 304
{
#line 304
  __nesc_bf_encode8(target, offset, length, value);
#line 304
  return value;
}

# 267 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 267
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 110 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 110
{
  return msg;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x2ace725eb780, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x2ace725eb780, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 114 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 114
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 493 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 495
{
  return msg;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x2ace7276a488, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2ace7276a488) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x2ace7276a488, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 487 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 488
{
  return 0;
}

# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x2ace727688e8, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x2ace727688e8) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x2ace727688e8, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 164 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__stop(void ){
#line 78
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 350 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 350
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;
  uint8_t myProto;
  serial_metadata_t *meta;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 358
    {
      myType = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
      myProto = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskProto;
    }
#line 364
    __nesc_atomic_end(__nesc_atomic); }
  if (1 == TOS_SERIAL_SERVERLINK_TYPE) {
      error_t error;

#line 367
      if (SERIAL_PROTO_PACKET_ACK == myProto || SERIAL_PROTO_PACKET_NOACK == myProto) {
          if (mySize >= sizeof(message_header_t )) {
              mySize -= /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(TOS_SERIAL_ACTIVE_MESSAGE_ID);
              mySize = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(TOS_SERIAL_ACTIVE_MESSAGE_ID, myBuf, mySize);
              meta = (serial_metadata_t *)myBuf->metadata;
              __nesc_htonbf_uint8((unsigned char *)&meta->control, 0, 2, (myType & 0xC0) >> 6);
              __nesc_htonbf_uint8((unsigned char *)&meta->control, 2, 2, (myType & 0x30) >> 4);
              __nesc_htonbf_uint8((unsigned char *)&meta->control, 4, 4, myType & 0x0f);
              myBuf = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(TOS_SERIAL_ACTIVE_MESSAGE_ID, myBuf, myBuf, mySize);
            }
          else 
#line 376
            {
            }
        }
      else {

          if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ackPending && /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA) {
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__stop();
              meta = (serial_metadata_t *)((message_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer)->metadata;
              __nesc_hton_uint8(meta->ack.nxdata, TRUE);
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ackPending = FALSE;
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 387
                error = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 387
                __nesc_atomic_end(__nesc_atomic); }
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
            }
        }
    }
  else 
#line 391
    {
      ({
#line 392
        extern int __attribute((error("static assertion failure: ""\"invlaid serial_type, should be TOS_SERIAL_CLASSICAL_TYPE or TOS_SERIAL_SERVERLINK_TYPE\""))) __static_check_4_392(void );

#line 392
        1 == TOS_SERIAL_CLASSICAL_TYPE ? 0 : __static_check_4_392(), 0;
      }
      );
#line 393
      if (mySize >= sizeof(message_header_t )) {
          mySize -= /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
          mySize = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
          myBuf = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
        }
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 399
    {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 403
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 246 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 246
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendTaskPending = TRUE;
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 247 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_empty(void )
#line 247
{
  bool ret;

#line 249
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 249
    ret = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr;
#line 249
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_top(void )
#line 263
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 265
  {
    if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_empty()) {
        tmp = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_pop(void )
#line 273
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 275
  {
    if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr != /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr) {
        retval = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr];
        if (++ /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr > /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ACK_QUEUE_SIZE) {
#line 278
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr = 0;
          }
      }
  }
#line 281
  return retval;
}

#line 579
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__runTask(void )
#line 579
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
    {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txPending = 0;
      idle = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_IDLE;
      done = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FINISH;
      fail = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ERROR;
      if (done || fail) {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_IDLE;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex].state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_AVAILABLE;
        }
    }
#line 605
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 609
        {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txSeqno++;
          if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto == SERIAL_PROTO_ACK) {
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 618
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 625
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 625
        goInactive = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__offPending;
#line 625
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 627
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INACTIVE;
#line 627
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 633
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 633
            {
              myAckState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_ACK_INDEX].state;
              myDataState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX].state;
            }
#line 636
            __nesc_atomic_end(__nesc_atomic); }
          if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_empty() && myAckState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 638
                {
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_ACK_INDEX].state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_COMPLETE;
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_ACK_INDEX].buf = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_top();

                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto = SERIAL_PROTO_ACK;
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 645
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 647
            if (myDataState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_FILLING || myDataState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 648
                  {
                    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProtoPending;
                    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 652
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
    {
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INACTIVE) {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__testOff();
          {
#line 669
            __nesc_atomic_end(__nesc_atomic); 
#line 669
            return;
          }
        }
    }
#line 672
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 675
        {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC = 0;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txByteCnt = 0;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_PROTO;
        }
#line 679
        __nesc_atomic_end(__nesc_atomic); }
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 681
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ERROR;
#line 681
            __nesc_atomic_end(__nesc_atomic); }
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx();
        }
    }
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 181 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 181
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0xC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 10 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialRestartControlP.nc"
static inline void /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__startDone(error_t err)
{
  /*SerialActiveMessageC.SR*/SerialRestartControlP__0__start_flag = TRUE;
  if (/*SerialActiveMessageC.SR*/SerialRestartControlP__0__restart_flag && err != SUCCESS) 
    {
      /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__start();
    }
  else 
    {
      /*SerialActiveMessageC.SR*/SerialRestartControlP__0__restart_flag = FALSE;
    }
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__startDone(error_t error)
#line 48
{
}

# 113 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__startDone(error_t error){
#line 113
  SerialStartP__SerialControl__startDone(error);
#line 113
  /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__startDone(error);
#line 113
}
#line 113
# 192 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 192
{
  * (volatile uint8_t *)0xC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 169 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 169
{
  * (volatile uint8_t *)0xC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 157 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 157
{
  * (volatile uint8_t *)0xC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 197 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 197
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 187 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 187
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 78
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 325 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__runTask(void )
#line 325
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 327
    {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_IDLE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_NOSYNC;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__is_stop = FALSE;
    }
#line 331
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__startDone(SUCCESS);
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 349 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__default__flush(void )
#line 349
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__postTask();
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFlush.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flush(void ){
#line 49
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__default__flush();
#line 49
}
#line 49
# 336 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__runTask(void )
#line 336
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flush();
}

# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialRestartControlP.nc"
static inline void /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__stopDone(error_t err)
{
  /*SerialActiveMessageC.SR*/SerialRestartControlP__0__start_flag = FALSE;
  if (/*SerialActiveMessageC.SR*/SerialRestartControlP__0__restart_flag) 
    {
      /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__start();
    }
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__stopDone(error_t error)
#line 49
{
}

# 138 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__stopDone(error_t error){
#line 138
  SerialStartP__SerialControl__stopDone(error);
#line 138
  /*SerialActiveMessageC.SR*/SerialRestartControlP__0__SplitControl__stopDone(error);
#line 138
}
#line 138
# 175 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 175
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 163 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 163
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 94 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 94
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 340 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flushDone(void )
#line 340
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialControl__stop();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 342
    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__is_stop = TRUE;
#line 342
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__stopDone(SUCCESS);
}

static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__runTask(void )
#line 346
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFlush__flushDone();
}

# 110 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  PrintfP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x2ace7258f990, message_t * msg, error_t error){
#line 100
  switch (arg_0x2ace7258f990) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x2ace7258f990, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 166 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id)
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*TimerMilliP.AlarmMilli32C.MuxAlarm62khz32C*/MuxAlarm62khz32C__0__CLIENT_ID);
#line 73
}
#line 73
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t WatchDogP__wd_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(WatchDogP__wd_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 29 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/WatchDogP.nc"
static inline void WatchDogP__TimerWD__fired(void )
#line 29
{
  WatchDogP__wd_task__postTask();
}

# 469 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__fired(void )
{
  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ackPending) {
      error_t error;

#line 473
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 473
        error = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 473
        __nesc_atomic_end(__nesc_atomic); }
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ackPending = FALSE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
    }
}

# 282 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 118
static __inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
}

# 135 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(am_id_t arg_0x2ace7258ec70, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(arg_0x2ace7258ec70, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(0, m, len);
}

# 125 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
inline static void * /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void */*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(m, len);
}

# 135 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
inline static void * TestUsbStationC__AMSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*TestUsbStationAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 54 "TestUsbStationC.nc"
static inline void TestUsbStationC__Timer0__fired(void )
{
  TestUsbStationC__counter++;
  if (TestUsbStationC__counter >= 1000) {
#line 57
    TestUsbStationC__counter = 0;
    }
#line 58
  if (TestUsbStationC__BUSY == FALSE) 
    {
      CountStruct *sendpkt = (CountStruct *)TestUsbStationC__AMSend__getPayload(&TestUsbStationC__msgpacket, (void *)0);

#line 61
      if (sendpkt == (void *)0) 
        {
          return;
        }
      __nesc_hton_uint16(sendpkt->counter.nxdata, TestUsbStationC__counter);
    }
  else 







    {
      return;
    }
}

# 204 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2ace72331690){
#line 83
  switch (arg_0x2ace72331690) {
#line 83
    case 0U:
#line 83
      WatchDogP__TimerWD__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__MilliTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      TestUsbStationC__Timer0__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2ace72331690);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 139 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 25 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/WatchDogP.nc"
static inline void WatchDogP__wd_task__runTask(void )
#line 25
{
   __asm volatile ("wdr");}

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
static inline error_t /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void )
#line 82
{
  memset(&/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m, 0, sizeof /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m);
  return SUCCESS;
}

# 109 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP__Init__init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP__state = PrintfP__S_STARTED;
  return SUCCESS;
}

# 219 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackInit(void )
#line 219
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr = 0;
}

#line 210
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.writePtr = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.readPtr = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INACTIVE;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxByteCnt = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxProto = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxSeqno = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC = 0;
}

#line 198
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txInit(void )
#line 198
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 200
  for (i = 0; i < /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_BUFFER_COUNT; i++) /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[i].state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_AVAILABLE;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INACTIVE;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txByteCnt = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txSeqno = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC = 0;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txPending = FALSE;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex = 0;
}

#line 223
static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__Init__init(void )
#line 223
{

  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txInit();
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit();
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackInit();

  return SUCCESS;
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 70
{
  if (57600L == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 73
    if (57600L == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 75
  return SUCCESS;
}

# 172 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 172
{
  return MeasureClockC__cycles / (baudrate >> 6) - 1;
}

# 60 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 231 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 231
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };


  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(57600L);



  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0xC9 = ctrl.flat;

  return SUCCESS;
}

#line 132
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 132
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };


  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(57600L);




  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0xC1 = ctrl.flat;

  return SUCCESS;
}

# 98 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;

  __iob[1] = &atm128_stdout;

  return rv;
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 423 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 3))
     | ((mode & 0x1) << 3);
  }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
inline static void RFA1DriverLayerP__SfdCapture__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__SfdCapture__setMode(mode);
#line 70
}
#line 70
# 190 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__SoftwareInit__init(void )
{
  * (volatile uint8_t *)0x149 = RFA1_CCA_THRES_VALUE;









  * (volatile uint8_t *)0x14D = 3;
  * (volatile uint8_t *)(0x13 + 0x20) |= 1 << 1;
  * (volatile uint8_t *)(0x14 + 0x20) &= ~(1 << 1);
#line 222
  * (volatile uint8_t *)0x145 = (0 & RFA1_TX_PWR_MASK) << 0;





  RFA1DriverLayerP__txPower = 0 & RFA1_TX_PWR_MASK;
  RFA1DriverLayerP__channel = 11 & RFA1_CHANNEL_MASK;
  * (volatile uint8_t *)0x144 |= 1 << 5;
  * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;

  * (volatile uint8_t *)0x139 |= 1 << 1;

  RFA1DriverLayerP__SfdCapture__setMode(ATMRFA1_CAPSC_ON);


  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;

  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__SoftwareInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PutcharP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PrintfP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 31 "TestUsbStationC.nc"
static inline void TestUsbStationC__Boot__booted(void )
{
  TestUsbStationC__AMControl__start();
}

# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void WatchDogP__TimerWD__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 21 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/WatchDogP.nc"
static inline void WatchDogP__Boot__booted(void )
#line 21
{
  WatchDogP__TimerWD__startPeriodic(4000);
}

# 104 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t SerialStartP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 44 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void )
#line 44
{
  SerialStartP__SerialControl__start();
}

# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  SerialStartP__Boot__booted();
#line 60
  WatchDogP__Boot__booted();
#line 60
  TestUsbStationC__Boot__booted();
#line 60
}
#line 60
# 157 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
}

# 439 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void )
{


  if (* (volatile uint8_t *)0xDC & (1 << 5)) {
    return ATM128_POWER_SAVE;
    }
  else {
#line 446
    return ATM128_POWER_DOWN;
    }
}

# 331 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void )
#line 331
{
  if (((* (volatile uint8_t *)0xC1 & (1 << 3) || * (volatile uint8_t *)0xC1 & (1 << 4)) || * (volatile uint8_t *)0xC9 & (1 << 3)) || * (volatile uint8_t *)0xC9 & (1 << 4)) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 335
    return ATM128_POWER_DOWN;
    }
}

# 364 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void )
{

  if (* (volatile uint8_t *)0x6F & ((((1 << 1) | (1 << 2)) | (1 << 3)) | (1 << 5))) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 370
    return ATM128_POWER_DOWN;
    }
}

# 921 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static inline mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void )
{
  if ((* (volatile uint8_t *)0x14E & (1 << 7)) != 0) {
    return ATM128_POWER_EXT_STANDBY;
    }
  else {
#line 926
    return ATM128_POWER_DOWN;
    }
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1Timer1P__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtm128UartP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
{
  if (McuSleepC__powerState < 0) {
      McuSleepC__powerState = McuSleepC__McuPowerOverride__lowestState();
      * (volatile uint8_t *)(0x33 + 0x20) = (* (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | __extension__ ({
#line 73
        uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[McuSleepC__powerState];
#line 73
        uint8_t __result;

#line 73
         __asm volatile ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }




  * (volatile uint8_t *)(0x33 + 0x20) |= 1 << 0;

   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
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
# 410 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__dataReceived(uint8_t data)
#line 410
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_state_machine(FALSE, data);
}

# 94 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 401 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__delimiterReceived(void )
#line 401
{
  /* atomic removed: atomic calls only */
#line 402
  {
    if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__is_stop) 
      {
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_state_machine(TRUE, 0);
      }
  }
}

# 85 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__delimiterReceived(void ){
#line 85
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (/*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.receiveEscape) {

          /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__dataReceived(data);
}

# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 134 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 134
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 140
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 414 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__valid_rx_proto(uint8_t proto)
#line 414
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_ACK: 
          case SERIAL_PROTO_PACKET_NOACK: 
            return TRUE;
      default: 
        return FALSE;
    }
}

# 258 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 258
{
  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 254
static inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 254
{
  return /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 281
static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(uint8_t proto)
#line 281
{
  error_t result = SUCCESS;

#line 283
  if (1 == TOS_SERIAL_CLASSICAL_TYPE) {
      if (proto != SERIAL_PROTO_PACKET_ACK) {
#line 284
        return FAIL;
        }
    }
  else 
#line 285
    {
      ({
#line 286
        extern int __attribute((error("static assertion failure: ""\"invlaid serial_type, should be TOS_SERIAL_CLASSICAL_TYPE or TOS_SERIAL_SERVERLINK_TYPE\""))) __static_check_2_286(void );

#line 286
        1 == TOS_SERIAL_SERVERLINK_TYPE ? 0 : __static_check_2_286(), 0;
      }
      );
    }
  /* atomic removed: atomic calls only */
#line 288
  {
    if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvProto = proto;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__startPacket(uint8_t proto){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(proto);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 314 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint16_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_current_crc(void )
#line 314
{
  uint16_t crc;
  uint8_t tmp = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.writePtr;

#line 317
  tmp = tmp == 0 ? /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 276 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 276
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 237 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_full(void )
#line 237
{
  uint8_t tmp;
#line 238
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 239
  {
    tmp = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr;
    tmp2 = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.readPtr;
  }
  if (++tmp > /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ACK_QUEUE_SIZE) {
#line 243
    tmp = 0;
    }
#line 244
  return tmp == tmp2;
}







static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_push(uint8_t token)
#line 253
{
  if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 255
      {
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr] = token;
        if (++ /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr > /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ACK_QUEUE_SIZE) {
#line 257
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ackQ.writePtr = 0;
          }
      }
#line 259
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx();
    }
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__resetReceive(void )
#line 67
{
  /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.receiveEscape = 0;
}

# 79 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__resetReceive(void ){
#line 79
  /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 305 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 305
{
  /* atomic removed: atomic calls only */
#line 306
  {
    switch (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          if (1 == TOS_SERIAL_SERVERLINK_TYPE) {
              if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvProto == SERIAL_PROTO_ACK) {

                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(TOS_SERIAL_ACTIVE_MESSAGE_ID);
                }
              else {
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(TOS_SERIAL_ACTIVE_MESSAGE_ID);
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
                }
            }
          else 
#line 320
            {
              ({
#line 321
                extern int __attribute((error("static assertion failure: ""\"invlaid serial_type, should be TOS_SERIAL_CLASSICAL_TYPE or TOS_SERIAL_SERVERLINK_TYPE\""))) __static_check_3_321(void );

#line 321
                1 == TOS_SERIAL_CLASSICAL_TYPE ? 0 : __static_check_3_321(), 0;
              }
              );
#line 322
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
            }
        break;

        case /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t ) - sizeof(message_metadata_t )) {
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 341
            ;
      }
  }
}

# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 304 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_top(void )
#line 304
{
  uint8_t tmp = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.readPtr];

#line 306
  return tmp;
}

#line 308
static __inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_pop(void )
#line 308
{
  uint8_t tmp = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.readPtr];

#line 310
  if (++ /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.readPtr > /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RX_DATA_BUFFER_SIZE) {
#line 310
    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.readPtr = 0;
    }
#line 311
  return tmp;
}

#line 300
static __inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_push(uint8_t data)
#line 300
{
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.buf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.writePtr] = data;
  if (++ /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.writePtr > /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RX_DATA_BUFFER_SIZE) {
#line 302
    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxBuf.writePtr = 0;
    }
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 548 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__completeSend(void )
#line 548
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 550
  {
    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX].state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 230 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 230
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 233
  {
    b = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 688 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDone(void )
#line 688
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 691
    {
      switch (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState) {

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_PROTO: 

            txResult = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto);



          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_SEQNO;

          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC = crcByte(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC, /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txProto);
          break;

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_SEQNO: 
            txResult = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txSeqno);
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INFO;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC = crcByte(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC, /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txSeqno);
          break;

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INFO: 
            {
              txResult = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex].buf);
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC = crcByte(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC, /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex].buf);
              ++/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txByteCnt;

              if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 719
                  nextByte = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SendBytePacket__nextByte();
                  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex].state == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__BUFFER_COMPLETE || /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txByteCnt >= /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SERIAL_MTU) {
                      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FCS1;
                    }
                  else {
                      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txBuf[/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txIndex].buf = nextByte;
                    }
                }
              else {
                  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FCS1;
                }
            }
          break;

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FCS1: 
            txResult = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC & 0xff);
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FCS2;
          break;

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FCS2: 
            txResult = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putData((/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txCRC >> 8) & 0xff);
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ENDFLAG;
          break;

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ENDFLAG: 
            txResult = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDelimiter();
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ENDWAIT;
          break;

          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ENDWAIT: 
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FINISH;
          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_FINISH: 
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx();
          break;
          case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_ERROR;
          /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDone(void ){
#line 100
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (/*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.sendEscape) {
          /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.sendEscape = 0;
          /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data = /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__txTemp;
          /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__send(&/*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data, 1);
        }
      else {
          /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 174 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 174
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf == (void *)0) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      return;
    }
  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 185
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 341 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 341
{
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 340 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 340
{
}

# 47 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 221 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 221
{
}

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__m_upper++;
    if ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__m_upper & /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void ){
#line 82
  /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow(void )
{
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow();
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void HplAtmRfa1Timer1P__Timer__overflow(void ){
#line 49
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow();
#line 49
}
#line 49
# 162 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void )
#line 162
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareA__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareA__default__fired();
#line 48
}
#line 48
# 172 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void )
#line 172
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareB__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareB__default__fired();
#line 48
}
#line 48
# 182 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void )
#line 182
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareC__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareC__default__fired();
#line 48
}
#line 48
# 322 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void )
#line 322
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
inline static void HplAtmRfa1Timer1P__Capture__fired(void ){
#line 48
  HplAtmRfa1Timer1P__Capture__default__fired();
#line 48
}
#line 48
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 65
{
  return 250;
}

#line 61
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void )
#line 61
{
  return /*PrintfC.QueueC*/QueueC__0__size;
}

#line 101
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal)
#line 101
{
  if (/*PrintfC.QueueC*/QueueC__0__Queue__size() < /*PrintfC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/QueueC__0__tail++;
      if (/*PrintfC.QueueC*/QueueC__0__tail == 250) {
#line 106
        /*PrintfC.QueueC*/QueueC__0__tail = 0;
        }
#line 107
      /*PrintfC.QueueC*/QueueC__0__size++;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 65
inline static uint8_t PrintfP__Queue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 152 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PrintfP.nc"
static inline int PrintfP__Putchar__putchar(int c)
{
  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 250 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 160
          0;

          {
#line 160
            __nesc_atomic_end(__nesc_atomic); 
#line 160
            return __nesc_temp;
          }
        }
      else 
#line 161
        {
          int __nesc_temp = 
#line 161
          -1;

          {
#line 161
            __nesc_atomic_end(__nesc_atomic); 
#line 161
            return __nesc_temp;
          }
        }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/Putchar.nc"
inline static int PutcharP__Putchar__putchar(int c){
#line 49
  int __nesc_result;
#line 49

#line 49
  __nesc_result = PrintfP__Putchar__putchar(c);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 110 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_68(void )
#line 110
{
#line 110
  HplAtmRfa1TimerMacP__Counter__overflow();
}

#line 187
__attribute((signal))   void __vector_65(void )
#line 187
{
#line 187
  HplAtmRfa1TimerMacP__CompareA__fired();
}

#line 73
static uint32_t HplAtmRfa1TimerMacP__Counter__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time.ll = * (volatile uint8_t *)0xE1;
      time.lh = * (volatile uint8_t *)0xE2;
      time.hl = * (volatile uint8_t *)0xE3;
      time.hh = * (volatile uint8_t *)0xE4;
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }

  return time.full;
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

# 107 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type now = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type remaining;




  expires = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;


  remaining = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = now + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = remaining - /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 += /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = 0;
    }
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt((/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )now << 6, 
  (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )remaining << 6);
}

# 80 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 87 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void )
#line 87
{
  if (! /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling) {








      const /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type now = /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
      const /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *pEnd = /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm + /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS;
      bool isset = FALSE;
      /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *p = /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm;
      bool *pset = /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset;
      /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt = (/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )0 - (/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1;

      for (; p != pEnd; p++, pset++) {
          if (*pset) {
              /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = now - p->t0;

#line 107
              if (p->dt <= elapsed) {
                  p->t0 += p->dt;
                  p->dt = 0;
                }
              else {
                  p->t0 = now;
                  p->dt -= elapsed;
                }

              if (p->dt <= dt) {
                  dt = p->dt;
                  isset = TRUE;
                }
            }
        }

      if (isset) {




          if (dt & ((/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1 << (8 * sizeof(/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type ) - 1))) {
            dt >>= 1;
            }
          /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(now, dt);
        }
      else {
          /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop();
        }
    }
}

# 267 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_66(void )
#line 267
{
#line 267
  HplAtmRfa1TimerMacP__CompareB__fired();
}

# 112 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC__state != 0) 
        {
          TaskletC__state |= 0x80;
          {
#line 119
            __nesc_atomic_end(__nesc_atomic); 
#line 119
            return;
          }
        }
      TaskletC__state = 1;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

#line 74
static void TaskletC__doit(void )
{
  for (; ; ) 
    {
      TaskletC__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC__state == 1) 
            {
              TaskletC__state = 0;
              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return;
              }
            }
          for (; 0; ) ;
          TaskletC__state = 1;
        }
#line 90
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 67 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__rxModeGet(void )
#line 67
{
  uint8_t mode;

#line 69
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    mode = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__rxMode;
#line 69
    __nesc_atomic_end(__nesc_atomic); }
  return mode;
}

# 132 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

#line 92
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

#line 178
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

# 217 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static void /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__PacketAntenna__set(message_t *msg, uint8_t logical_ant_id)
#line 78
{
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__getMeta(msg)->ant_id = logical_ant_id ? 1 : 0;
  /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntCtrlFlag__set(msg);
}

#line 28
static antdiv_metadata_t */*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__getMeta(message_t *msg)
#line 28
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__RadioPacket__metadataLength(msg);
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 111 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RFA1DriverLayerP__RadioPacket__metadataLength(msg);
}

#line 106
static void *RFA1DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__RadioPacket__headerLength(msg);
}

# 104 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 937 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 222 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 225
  return (addr == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 120 "/home/wangqi/platforms2013/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 120
{
  am_addr_t myAddr;

#line 122
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    myAddr = ActiveMessageAddressC__addr;
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 94
{
  am_group_t myGroup;

#line 96
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    myGroup = ActiveMessageAddressC__group;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 205 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 942 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;

  __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/AntennaDiversityLayerC.nc"
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__AntennaDiversityConfig__txModeGet(void )
#line 49
{
  uint8_t txmode;

#line 51
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 51
    txmode = /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__txMode;
#line 51
    __nesc_atomic_end(__nesc_atomic); }
  return txmode;
}

# 440 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg)
{
  uint32_t time;
  uint8_t length;
  uint8_t *data;
  void *timesync;

  uint8_t ant;


  if ((RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE || RFA1DriverLayerP__state != RFA1DriverLayerP__STATE_RX_ON) || RFA1DriverLayerP__radioIrq) {
    return EBUSY;
    }
  length = (RFA1DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RFA1DriverLayerP__PacketTransmitPower__get(msg) : 0) & RFA1_TX_PWR_MASK;

  if (length != RFA1DriverLayerP__txPower) 
    {
      RFA1DriverLayerP__txPower = length;




      * (volatile uint8_t *)0x145 = RFA1DriverLayerP__txPower << 0;
    }



  if (
#line 467
  RFA1DriverLayerP__Config__requiresRssiCca(msg)
   && (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) > ((RFA1DriverLayerP__rssiClear + RFA1DriverLayerP__rssiBusy) >> 3)) {
    return EBUSY;
    }
  * (volatile uint8_t *)0x142 = 9;


  timesync = RFA1DriverLayerP__PacketTimeSyncOffset__isSet(msg) ? (void *)msg + RFA1DriverLayerP__PacketTimeSyncOffset__get(msg) : 0;

  data = RFA1DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata);


  * (volatile uint8_t *)0x180 = length;


  length -= 2;


  if ((* (volatile uint8_t *)0x141 & RFA1_TRX_STATUS_MASK) != 9) 
    {
      for (; 0; ) ;

      * (volatile uint8_t *)0x142 = 6;
      return EBUSY;
    }



  if (RFA1DriverLayerP__PacketAntenna__isSet(msg)) {
      ant = RFA1DriverLayerP__PacketAntenna__get(msg) ? 1 : 2;
    }
  else 
#line 498
    {
      ant = RFA1DriverLayerP__AntennaDiversityConfig__txModeGet() & ANTDIV_TXMODE_MASK;
    }




  * (volatile uint8_t *)0x14D = (* (volatile uint8_t *)0x14D & ~0x03) | ant;

  if (ant == 2) {
      * (volatile uint8_t *)(0x14 + 0x20) |= 1 << 1;
    }
  else 
#line 509
    {
      * (volatile uint8_t *)(0x14 + 0x20) &= ~(1 << 1);
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time = RFA1DriverLayerP__LocalTime__get();
      * (volatile uint8_t *)0x142 = 2;
    }
#line 518
    __nesc_atomic_end(__nesc_atomic); }



  time += RFA1DriverLayerP__TX_SFD_DELAY;

  for (; 0; ) ;


  if (timesync != 0) {
    __nesc_hton_int32((* (timesync_relative_t *)timesync).nxdata, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).nxdata) - time);
    }

  memcpy((void *)(& * (volatile uint8_t *)0x180 + 1), data, length);


  * (volatile uint8_t *)0x142 = 6;

  if (timesync != 0) {
    __nesc_hton_uint32((* (timesync_absolute_t *)timesync).nxdata, __nesc_ntoh_int32((* (timesync_relative_t *)timesync).nxdata) + time);
    }
  RFA1DriverLayerP__PacketTimeStamp__set(msg, time);
#line 556
  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 102 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type ndt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__size_type n = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__HplAtmegaCounter__get();


      n += 2 > ndt ? 2 : ndt;

      /*RFA1DriverLayerC.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__1__setAlarm(n);
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 252 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 84 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 347 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_67(void )
#line 347
{
#line 347
  HplAtmRfa1TimerMacP__CompareC__fired();
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x2A + 0x20) = * (volatile uint8_t *)(0x34 + 0x20);
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
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



  __nesc_enable_interrupt();


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

#line 287
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2ace71fc5020){
#line 75
  switch (arg_0x2ace71fc5020) {
#line 75
    case WatchDogP__wd_task:
#line 75
      WatchDogP__wd_task__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx:
#line 75
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case PrintfP__retrySend:
#line 75
      PrintfP__retrySend__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2ace71fc5020);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 134 "TestUsbStationC.nc"
static void TestUsbStationC__AMSend__sendDone(message_t *msg, error_t error)
{
  uint8_t channelnum;

#line 137
  if (&TestUsbStationC__msgpacket == msg) 
    {
      TestUsbStationC__BUSY = FALSE;
    }
  else 

    {
      printf("no ack");
      printfflush();
    }
}

# 130 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 133
          SUCCESS;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 135
          FAIL;

          {
#line 135
            __nesc_atomic_end(__nesc_atomic); 
#line 135
            return __nesc_temp;
          }
        }
#line 136
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

#line 119
static void PrintfP__sendNext(void )
#line 119
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 123
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].nxdata, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 136 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 136
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 173 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 173
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 175
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 149
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 149
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 151
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 69
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 71
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 537 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__MaybeScheduleTx(void )
#line 537
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 538
    {
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txPending == 0) {
          if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RunTx__postTask() == SUCCESS) {
              /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txPending = 1;
            }
        }
    }
#line 544
    __nesc_atomic_end(__nesc_atomic); }
}

# 163 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

# 282 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ADLayerC*/AntennaDiversityLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 132 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 99 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC__state != 0x80) {
        {
#line 104
          __nesc_atomic_end(__nesc_atomic); 
#line 104
          return;
        }
        }
#line 106
      TaskletC__state = 1;
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

# 96 "/home/wangqi/platforms2013/tinyos-main/tos/system/SimpleArbiterP.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 69 "/home/wangqi/platforms2013/tinyos-main/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 144 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 76 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 230 "/home/wangqi/platforms2013/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

# 189 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

#line 174
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 142 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 142
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 146
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 148
    PrintfP__retrySend__postTask();
    }
}

# 364 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__testOff(void )
#line 364
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 366
  {
    if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INACTIVE && 
    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 374
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 377
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__offPending = TRUE;
    }
}

# 98 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.sendEscape = 0;
      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__send(&/*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data, 1);
}

# 156 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 156
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 160
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 163
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 214 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 214
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 215
    {
      * (volatile uint8_t *)0xC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 353 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SplitControl__start(void )
#line 353
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 354
    {
      if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__txState != /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__TXSTATE_INACTIVE && /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState != /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INACTIVE) 
        {
#line 356
          {
            unsigned char __nesc_temp = 
#line 356
            EALREADY;

            {
#line 356
              __nesc_atomic_end(__nesc_atomic); 
#line 356
              return __nesc_temp;
            }
          }
        }
#line 357
      if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__is_stop) 
        {
#line 358
          {
            unsigned char __nesc_temp = 
#line 358
            EALREADY;

            {
#line 358
              __nesc_atomic_end(__nesc_atomic); 
#line 358
              return __nesc_temp;
            }
          }
        }
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
#line 360
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__startDoneTask__postTask();
  return SUCCESS;
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
              /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 147 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = t0;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 221 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 221
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0xC6);
    }
}

# 425 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialP.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_state_machine(bool isDelimeter, uint8_t data)
#line 425
{

  switch (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState) {

      case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit();
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_PROTO;
          }
      break;

      case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_PROTO: 
        if (!isDelimeter) {
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC = crcByte(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC, data);
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_TOKEN;
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxProto = data;
            if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__valid_rx_proto(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxProto)) {
              goto nosync;
              }






            if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__startPacket(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxProto) != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxSeqno = data;
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC = crcByte(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC, /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxSeqno);
            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INFO;
          }
      break;

      case /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INFO: 
        if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxByteCnt < /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SERIAL_MTU) {

            if (isDelimeter) {
                if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxByteCnt >= 2) {
                    if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_current_crc() == /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC) {
                        /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__endPacket(SUCCESS);
                        if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxProto == SERIAL_PROTO_PACKET_ACK) 
                          {
                            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ack_queue_push(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxSeqno);
                          }
                        /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit();
                        /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__resetReceive();
                        if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__offPending) {
                            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INACTIVE;
                            /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxByteCnt >= 2) {
                    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__byteReceived(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_top());
                    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC = crcByte(/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxCRC, /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_pop());
                  }
                /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rx_buffer_push(data);
                /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;
      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxInit();
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__SerialFrameComm__resetReceive();
  /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__ReceiveBytePacket__endPacket(FAIL);
  if (/*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__offPending) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_INACTIVE;
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__testOff();
    }
  else {
    if (isDelimeter) {
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__rxState = /*SerialDispatcherC.SerialDispatcherCommonC.SerialP*/SerialP__0__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 94 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  const uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 406 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 406
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 408
  {
    if (!/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskProto = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__recvProto;
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 419
      {

        /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 227 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 227
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__state.sendEscape = 1;
      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__txTemp = data ^ 0x20;
      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data = data;
    }
  return /*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__UartStream__send(&/*SerialDispatcherC.SerialDispatcherCommonC.HdlcTranslateC*/HdlcTranslateC__0__m_data, 1);
}

# 322 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 322
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0xCE);
    }
}

#line 327
__attribute((interrupt))   void __vector_38(void )
#line 327
{
  HplAtm128UartP__HplUart1__txDone();
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
__attribute((signal))   void __vector_20(void )
#line 73
{
#line 73
  HplAtmRfa1Timer1P__Timer__overflow();
}

#line 164
__attribute((signal))   void __vector_17(void )
#line 164
{
#line 164
  HplAtmRfa1Timer1P__CompareA__fired();
}








__attribute((signal))   void __vector_18(void )
#line 174
{
#line 174
  HplAtmRfa1Timer1P__CompareB__fired();
}








__attribute((signal))   void __vector_19(void )
#line 184
{
#line 184
  HplAtmRfa1Timer1P__CompareC__fired();
}

#line 324
__attribute((signal))   void __vector_16(void )
#line 324
{
#line 324
  HplAtmRfa1Timer1P__Capture__fired();
}

# 110 "/home/wangqi/platforms2013/tinyos-main/tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int uart_putchar(char c, struct __file *stream)
#line 110
{








  return PutcharP__Putchar__putchar(c);
}

# 828 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/radiox/RFA1DriverLayerP.nc"
__attribute((interrupt))   void __vector_63(void )
#line 828
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 831
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_TX_END;
#line 831
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_60(void )
#line 838
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 841
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_END;
#line 841
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}





__attribute((signal))   void __vector_59(void )
#line 849
{
  for (; 0; ) ;

  RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_START;
   __asm volatile ("sei" :  :  : "memory");
  RFA1DriverLayerP__Tasklet__schedule();
   __asm volatile ("cli" :  :  : "memory");}





__attribute((interrupt))   void __vector_57(void )
#line 861
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 864
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_PLL_LOCK;
#line 864
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_64(void )
#line 871
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 874
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_AWAKE;
#line 874
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_61(void )
#line 881
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 884
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_CCA_ED_DONE;
#line 884
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}

