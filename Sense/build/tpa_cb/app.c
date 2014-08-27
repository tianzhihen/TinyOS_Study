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
#line 304
static inline uint8_t __nesc_bf_decode8(const uint8_t *msg, unsigned offset, uint8_t length)  ;
#line 304
static inline void __nesc_bf_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)  ;
#line 304
static __inline uint8_t __nesc_ntohbf_uint8(const void *source, unsigned offset, uint8_t length)  ;
#line 304
static __inline uint8_t __nesc_htonbf_uint8(void *target, unsigned offset, uint8_t length, uint8_t value)  ;





static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
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
# 121 "/home/wangqi/.work/3.4.4/avr8-gnu-toolchain-linux_x86_64/bin/../lib/gcc/avr/4.8.1/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2abfc428e020, int arg_0x2abfc428e288, size_t arg_0x2abfc428e530);
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


typedef int (*__compar_fn_t)(const void *arg_0x2abfc42b4838, const void *arg_0x2abfc42b4b10);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
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
  int (*put)(char arg_0x2abfc4428100, struct __file *arg_0x2abfc4428440);
  int (*get)(struct __file *arg_0x2abfc4428b30);
  void *udata;
};
#line 405
extern struct __file *__iob[];
#line 417
struct __file;
#line 649
extern int printf(const char *__fmt, ...);
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4263 {


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


enum __nesc_unnamed4264 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4265 {


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


enum __nesc_unnamed4266 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4267 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4268 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4269 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4270 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4271 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4272 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4273 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4274 {
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
# 169 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa_cb/RadioConfig.h"
enum __nesc_unnamed4275 {





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
enum __nesc_unnamed4276 {
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
typedef struct __nesc_unnamed4277 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4278 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4279 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4280 {
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

enum __nesc_unnamed4281 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4282 {
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
enum __nesc_unnamed4283 {
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

enum __nesc_unnamed4284 {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_RSSI_MASK = 0x1F
};
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4285 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4286 {
  TOS_SERIAL_CLASSICAL_TYPE = 0, 
  TOS_SERIAL_SERVERLINK_TYPE = 1
};








enum __nesc_unnamed4287 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4288 {
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

enum __nesc_unnamed4289 {
  AM_PRINTF_MSG = 100
};
# 10 "Sense.h"
enum __nesc_unnamed4290 {

  SAMPLING_PERIOD = 1000
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
typedef uint16_t SenseC__Read__val_t;
typedef TMilli SenseC__SenseTimer__precision_tag;
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
typedef TMicro AdcP__BusyWait__precision_tag;
typedef uint16_t AdcP__BusyWait__size_type;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4301 {
  AdcReadClientC__0__ID = 0U, AdcReadClientC__0__HAL_ID = 0U
};
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Boot.nc"
static void SenseC__Boot__booted(void );
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static void SenseC__Read__readDone(error_t result, SenseC__Read__val_t val);
# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void SenseC__SenseTimer__fired(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
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
uint8_t arg_0x2abfc4583998);
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2abfc4583998, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Alarm.nc"
/*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type t0, /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);
#line 73
static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2abfc4583998);
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
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__default__fired(void );
# 72 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 53
static bool HplAtmRfa1TimerMacP__Counter__test(void );
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 61
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__default__fired(void );
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
uint8_t arg_0x2abfc47dead0);
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2abfc47dead0, 
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2abfc47dead0, 
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2abfc47dead0);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2abfc43d9020);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2abfc43d9020);
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
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
uint8_t arg_0x2abfc48b5020);
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2abfc48b5020);
# 41 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(
# 40 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2abfc48b5020);
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
am_id_t arg_0x2abfc4972650, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2abfc4973460, 
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2abfc4973460, 
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
am_id_t arg_0x2abfc49c9bb8, 
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
am_id_t arg_0x2abfc49ebcd0, 
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
uart_id_t arg_0x2abfc4b62020, 
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b62020, 
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
uart_id_t arg_0x2abfc4b63488, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b618e8, 
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b618e8);
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b618e8, 
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
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 182 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void );
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__setChannel(uint8_t mux);
#line 108
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 66
static void HplAtm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn);
#line 176
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 112
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );
#line 84
static uint8_t HplAtm128AdcP__HplAtm128Adc__getRef(void );
#line 121
static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static uint8_t HplAtm128AdcP__HplAtm128Adc__getChannel(void );
#line 95
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 78
static void HplAtm128AdcP__HplAtm128Adc__setRef(uint8_t ref);
#line 90
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8ed38);
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8a020);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8a020);
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8fbb0);
# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8fbb0);
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8fbb0);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5015908);
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5013550, 
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5010cd0);
# 25 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5010cd0);
# 39 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5010cd0);
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501e060);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501e060, 
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501dd28, 
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501a940);
# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501a940);
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501a940);
# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AtmegaVoltageP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t AtmegaVoltageP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t AtmegaVoltageP__Atm128AdcConfig__getPrescaler(void );
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static error_t SenseC__Read__read(void );
# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
static void SenseC__SenseTimer__startPeriodic(uint32_t dt);
# 134 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
static void SenseC__Leds__set(uint8_t val);
# 18 "SenseC.nc"
static inline void SenseC__Boot__booted(void );



static inline void SenseC__SenseTimer__fired(void );



static inline void SenseC__Read__readDone(error_t result, uint16_t val);
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
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4302 {
  MeasureClockC__MAGIC = 31250 / (16 / 8)
};
#line 150
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
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
uint8_t arg_0x2abfc4583998);
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
#line 265
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void );

void __vector_66(void ) __attribute((signal))   ;
#line 345
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
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
uint8_t arg_0x2abfc47dead0);
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









static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




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
uint8_t arg_0x2abfc43d9020);
# 76 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/wangqi/platforms2013/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4313 {

  SchedulerBasicP__NUM_TASKS = 14U, 
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
static void LedsP__Leds__set(uint8_t val);
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
am_id_t arg_0x2abfc4972650, 
# 80 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/home/wangqi/platforms2013/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2abfc4973460, 
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
am_id_t arg_0x2abfc49c9bb8, 
# 103 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2abfc49ebcd0, 
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
uart_id_t arg_0x2abfc4b62020, 
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
uart_id_t arg_0x2abfc4b63488, 
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b618e8, 
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b618e8);
# 23 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2abfc4b618e8, 
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
# 119 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__setChannel(uint8_t mux);
#line 108
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 66
static void Atm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn);
#line 176
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 112
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );
#line 84
static uint8_t Atm128AdcP__HplAtm128Adc__getRef(void );
#line 121
static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static uint8_t Atm128AdcP__HplAtm128Adc__getChannel(void );
#line 95
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 78
static void Atm128AdcP__HplAtm128Adc__setRef(uint8_t ref);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
#line 100
struct Atm128AdcP____nesc_unnamed4339 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 6;
} Atm128AdcP__f;
#line 104
#line 100
struct Atm128AdcP____nesc_unnamed4339 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 126
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(uint8_t currentChannel, uint8_t currentRefVoltage, uint8_t channel, uint8_t refVoltage);



static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 201
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 221
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 253
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage);
# 182 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static void HplAtm128AdcP__HplAtm128Adc__setChannel(uint8_t mux);








static uint8_t HplAtm128AdcP__HplAtm128Adc__getChannel(void );



static inline void HplAtm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn);










static void HplAtm128AdcP__HplAtm128Adc__setRef(uint8_t ref);



static inline uint8_t HplAtm128AdcP__HplAtm128Adc__getRef(void );





static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );




static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);



static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 112
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 145
void __vector_29(void ) __attribute((signal))   ;








static inline mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void );







static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4340 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8ed38);
# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8a020);
# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8a020);
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x2abfc4f8fbb0);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4341 {
#line 75
  ArbiterP__0__grantedTask = 12U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4342 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4343 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4344 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/BusyWait.nc"
static void AdcP__BusyWait__wait(AdcP__BusyWait__size_type dt);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5015908, 
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5013550, 
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5010cd0);
# 25 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5010cd0);
# 39 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x2abfc5010cd0);
# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
enum AdcP____nesc_unnamed4345 {
#line 104
  AdcP__acquiredData = 13U
};
#line 104
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 58
enum AdcP____nesc_unnamed4346 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);







static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 144
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501e060, 
# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501dd28);
# 120 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501a940);
# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2abfc501a940);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/sensors/AtmegaVoltageP.nc"
static inline uint8_t AtmegaVoltageP__Atm128AdcConfig__getChannel(void );





static inline uint8_t AtmegaVoltageP__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t AtmegaVoltageP__Atm128AdcConfig__getPrescaler(void );
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

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
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

# 82 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
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

# 49 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
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
inline static void /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(uint8_t arg_0x2abfc4583998){
#line 78
  switch (arg_0x2abfc4583998) {
#line 78
    case /*TimerMilliP.AlarmMilli32C.MuxAlarm62khz32C*/MuxAlarm62khz32C__0__CLIENT_ID:
#line 78
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
      break;
#line 78
    default:
#line 78
      /*MuxAlarm62khz32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(arg_0x2abfc4583998);
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
# 265 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void )
#line 265
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareB__default__fired();
#line 48
}
#line 48
# 345 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void )
#line 345
{
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareC__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareC__default__fired();
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
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

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
  if (!0U) {
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
# 95 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 95
{
#line 95
  union __nesc_unnamed4347 {
#line 95
    Atm128Adcsra_t f;
#line 95
    uint8_t t;
  } 
#line 95
  c = { .f = x };

#line 95
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 99
{
  * (volatile uint8_t *)0x7A = HplAtm128AdcP__Adcsra2int(x);
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 95
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 95
}
#line 95
# 106 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 106
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adate = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__AdcInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Atm128AdcP__Init__init();
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

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init();
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
# 134 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Leds.nc"
inline static void SenseC__Leds__set(uint8_t val){
#line 134
  LedsP__Leds__set(val);
#line 134
}
#line 134
# 26 "SenseC.nc"
static inline void SenseC__Read__readDone(error_t result, uint16_t val)
{
  if (result == SUCCESS) 
    {
      printf("Voltage is :%d \n", val);
      printfflush();
      if (val > 10) 
        {
          SenseC__Leds__set(0x0f);
        }
      else {
#line 36
        if (val > 5) 
          {
            SenseC__Leds__set(0x03);
          }
        else 
          {
            SenseC__Leds__set(0x01);
          }
        }
    }
}

# 48 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x2abfc501e060, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x2abfc501e060) {
#line 63
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 63
      SenseC__Read__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x2abfc501e060, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 52 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 116 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 116
{
  * (volatile uint8_t *)0x7A &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 112 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 112
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 112
}
#line 112
# 131 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2abfc4f8a020){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2abfc4f8a020);
#line 65
}
#line 65
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/home/wangqi/platforms2013/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  unsigned int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 47 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x2abfc501a940){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x2abfc501a940) {
#line 120
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x2abfc501a940);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x2abfc5015908, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x2abfc5015908, result, val);
#line 63
}
#line 63
# 104 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 104
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
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
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x2abfc4972650, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x2abfc4972650, addr, msg, len);
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
# 310 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 304
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x2abfc4b618e8, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x2abfc4b618e8) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x2abfc4b618e8, msg, upperLen);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x2abfc4b618e8){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x2abfc4b618e8) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x2abfc4b618e8);
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
# 51 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__clr(uint8_t bit)
#line 51
{
#line 51
  * (volatile uint8_t * )37U &= ~(1 << bit);
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

static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
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

static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
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

static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 87 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 87
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}

static inline error_t AdcP__Read__read(uint8_t c)
#line 96
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x2abfc501dd28){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(arg_0x2abfc501dd28);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 202 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2abfc4f8fbb0){
#line 102
  switch (arg_0x2abfc4f8fbb0) {
#line 102
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2abfc4f8fbb0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2abfc4f8a020){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2abfc4f8a020);
#line 59
}
#line 59
# 190 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
}

# 150 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 150
{
  if (MeasureClockC__cycles >= 24960) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 153
  if (MeasureClockC__cycles >= 12480) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 155
  if (MeasureClockC__cycles >= 6208) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 157
  if (MeasureClockC__cycles >= 3072) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 159
  if (MeasureClockC__cycles >= 1536) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 161
  if (MeasureClockC__cycles >= 768) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 163
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 78 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setRef(uint8_t ref){
#line 78
  HplAtm128AdcP__HplAtm128Adc__setRef(ref);
#line 78
}
#line 78
# 66 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn)
#line 66
{
  if (adlarOn) {
    * (volatile uint8_t *)0x7C |= 1 << 5;
    }
  else {
#line 70
    * (volatile uint8_t *)0x7C &= ~(1 << 5);
    }
}

# 66 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn){
#line 66
  HplAtm128AdcP__HplAtm128Adc__setAdlar(adlarOn);
#line 66
}
#line 66
#line 54
inline static void Atm128AdcP__HplAtm128Adc__setChannel(uint8_t mux){
#line 54
  HplAtm128AdcP__HplAtm128Adc__setChannel(mux);
#line 54
}
#line 54
# 81 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__HplAtm128Adc__getRef(void )
#line 81
{
  return (* (volatile uint8_t *)0x7C & 0xC0) >> 6;
}

# 84 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static uint8_t Atm128AdcP__HplAtm128Adc__getRef(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getRef();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
#line 60
inline static uint8_t Atm128AdcP__HplAtm128Adc__getChannel(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getChannel();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 141 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(uint8_t currentChannel, uint8_t currentRefVoltage, uint8_t channel, uint8_t refVoltage)
#line 141
{
  return refVoltage == currentRefVoltage && ((channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == currentChannel);
}

#line 201
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 201
{
  Atm128Adcsra_t adcsr;

  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(Atm128AdcP__HplAtm128Adc__getChannel(), Atm128AdcP__HplAtm128Adc__getRef(), channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  Atm128AdcP__HplAtm128Adc__setChannel(channel);
  Atm128AdcP__HplAtm128Adc__setAdlar(leftJustify);
  Atm128AdcP__HplAtm128Adc__setRef(refVoltage);
  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adate = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 217
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 221
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 227
        Atm128AdcP__f.precise;

        {
#line 227
          __nesc_atomic_end(__nesc_atomic); 
#line 227
          return __nesc_temp;
        }
      }
    }
#line 230
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 48 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/sensors/AtmegaVoltageP.nc"
static inline uint8_t AtmegaVoltageP__Atm128AdcConfig__getChannel(void )
{

  return ATM128_ADC_SNGL_1_23;
}

# 144 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 144
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x2abfc5010cd0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x2abfc5010cd0) {
#line 25
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 25
      __nesc_result = AtmegaVoltageP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x2abfc5010cd0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 71 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 71
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 54 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/sensors/AtmegaVoltageP.nc"
static inline uint8_t AtmegaVoltageP__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_OFF;
}

# 148 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 148
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x2abfc5010cd0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x2abfc5010cd0) {
#line 32
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 32
      __nesc_result = AtmegaVoltageP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x2abfc5010cd0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 75
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 59 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/sensors/AtmegaVoltageP.nc"
static inline uint8_t AtmegaVoltageP__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 152 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 152
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x2abfc5010cd0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x2abfc5010cd0) {
#line 39
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 39
      __nesc_result = AtmegaVoltageP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x2abfc5010cd0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 79 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 79
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
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
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x2abfc49c9bb8, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x2abfc49c9bb8, msg, error);
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
inline static void /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x2abfc4b62020, message_t * msg, error_t error){
#line 100
  switch (arg_0x2abfc4b62020) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x2abfc4b62020, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
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
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x2abfc49ebcd0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x2abfc49ebcd0, msg, payload, len);
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
inline static message_t * /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x2abfc4b63488, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2abfc4b63488) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x2abfc4b63488, msg, payload, len);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x2abfc4b618e8, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x2abfc4b618e8) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherCommonC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x2abfc4b618e8, msg, dataLinkLen);
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
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x2abfc4973460, message_t * msg, error_t error){
#line 100
  switch (arg_0x2abfc4973460) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x2abfc4973460, msg, error);
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

# 133 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 112 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 112
{
  * (volatile uint8_t *)0x7A |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 108 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 108
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 108
}
#line 108
# 126 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 126
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 127
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 69 "/home/wangqi/platforms2013/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "/home/wangqi/platforms2013/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2abfc4f8ed38){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2abfc4f8ed38);
#line 53
}
#line 53
# 77 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 44 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x2abfc501a940){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x2abfc501a940) {
#line 88
    case /*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x2abfc501a940);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "/home/wangqi/platforms2013/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SenseC__Read__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SenseAppC.Sensor.DemoSensorC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 22 "SenseC.nc"
static inline void SenseC__SenseTimer__fired(void )
{
  SenseC__Read__read();
}

# 204 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2abfc47dead0){
#line 83
  switch (arg_0x2abfc47dead0) {
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
      SenseC__SenseTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2abfc47dead0);
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

# 61 "/home/wangqi/platforms2013/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init();
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
# 105 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei" :  :  : "memory");}

# 64 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/Timer.nc"
inline static void SenseC__SenseTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 18 "SenseC.nc"
static inline void SenseC__Boot__booted(void )
{
  SenseC__SenseTimer__startPeriodic(SAMPLING_PERIOD);
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
  SenseC__Boot__booted();
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

# 154 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void )
#line 154
{
  if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
      return ATM128_POWER_ADC_NR;
    }
  else {
    return ATM128_POWER_DOWN;
    }
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128AdcP__McuPowerOverride__lowestState();
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
# 90 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 90
{
  return * (volatile uint16_t *)0x78;
}

#line 87
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 87
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)0x7A;
}

#line 162
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 162
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 166
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 183
      oldSr.adif || oldSr.adsc;

#line 183
      return __nesc_temp;
    }
  }
}

# 176 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 176
  unsigned char __nesc_result;
#line 176

#line 176
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 176

#line 176
  return __nesc_result;
#line 176
}
#line 176
# 253 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage)
#line 253
{
  return FALSE;
}

# 119 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char __nesc_result;
#line 119

#line 119
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 157 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 157
{
}

# 66 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x2abfc5013550, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x2abfc5013550, result, val);
#line 66
}
#line 66
# 55 "/home/wangqi/platforms2013/tinyos-main/tos/platforms/tpa/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 55
{

  if (dt) {
#line 82
     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/BusyWait.nc"
inline static void AdcP__BusyWait__wait(AdcP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 67 "/home/wangqi/platforms2013/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 109 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 109
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {

            AdcP__BusyWait__wait(125);
            AdcP__sample();
          }
        else 
          {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {

            AdcP__BusyWait__wait(125);
            AdcP__sample();
          }
        else 
          {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 121 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 121
{
#line 121
  * (volatile uint8_t *)0x7A &= ~(1 << 3);
}

# 121 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 121
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 121
}
#line 121
# 145 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 145
{
  bool precise;
#line 146
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 173
      uint8_t nextVoltage;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          nextVoltage = Atm128AdcP__HplAtm128Adc__getRef();
          nextChannel = Atm128AdcP__HplAtm128Adc__getChannel();
        }
#line 179
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            Atm128AdcP__HplAtm128Adc__setChannel(nextChannel);
            Atm128AdcP__HplAtm128Adc__setRef(nextVoltage);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(Atm128AdcP__HplAtm128Adc__getChannel(), Atm128AdcP__HplAtm128Adc__getRef(), nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 197
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 182 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 182
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 182
}
#line 182
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

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE1;
    time.lh = * (volatile uint8_t *)0xE2;
    time.hl = * (volatile uint8_t *)0xE3;
    time.hh = * (volatile uint8_t *)0xE4;
  }

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

#line 347
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2abfc43d9020){
#line 75
  switch (arg_0x2abfc43d9020) {
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
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2abfc43d9020);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 75 "/home/wangqi/platforms2013/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
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

# 136 "/home/wangqi/platforms2013/tinyos-main/tos/system/LedsP.nc"
static void LedsP__Leds__set(uint8_t val)
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

# 83 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm1281/adc/AdcP.nc"
static void AdcP__sample(void )
#line 83
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 62 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static uint8_t HplAtm128AdcP__HplAtm128Adc__getChannel(void )
#line 62
{
  return (* (volatile uint8_t *)0x7C & 0x1F) | (((* (volatile uint8_t *)0x7B & (1 << 3)) >> 3) << 5);
}

#line 53
static void HplAtm128AdcP__HplAtm128Adc__setChannel(uint8_t mux)
#line 53
{

  if (mux & 0x20) {
    * (volatile uint8_t *)0x7B |= 1 << 3;
    }
  else {
#line 58
    * (volatile uint8_t *)0x7B &= ~(1 << 3);
    }
#line 59
  * (volatile uint8_t *)0x7C = (* (volatile uint8_t *)0x7C & 0xE0) | (mux & 0x1F);
}

#line 77
static void HplAtm128AdcP__HplAtm128Adc__setRef(uint8_t ref)
#line 77
{
  * (volatile uint8_t *)0x7C = ((ref << 6) & 0xC0) | (* (volatile uint8_t *)0x7C & 0x3F);
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

# 154 "/home/wangqi/platforms2013/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
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

# 145 "/home/wangqi/platforms2013/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_29(void )
#line 145
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

