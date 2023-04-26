
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#include<stdbool.h>
#include<stdint.h>

#define CPU_TYPE                CPU_TYPE_32
#define CPU_BIT_ORDER           MSB_FIRST
#define CPU_BYTE_ORDER          HIGH_BYTE_FIRST


#ifndef FALSE 
#define FALSE                   (bool ) false
#endif

#ifndef TRUE 
#define TRUE                   (bool ) true
#endif

typedef _Bool                  boolean;
typedef int8_t                 sint8t;
typedef uint8_t                uint8;
typedef int16_t                sint16t;
typedef uint16_t               uint16;
typedef int32_t                sint32t;
typedef uint32_t               uint32;
typedef int64_t                sint64t;
typedef uint64_t               uint64;



typedef volatile int8_t        vint8_t;
typedef volatile uint8_t       vuint8_t;
typedef volatile int16_t       vint16_t;
typedef volatile uint16_t      vuint16_t;
typedef volatile int32_t       vint32_t;
typedef volatile uint32_t      vuint32_t;
typedef volatile int64_t       vint64_t;
typedef volatile uint64_t      vuint64_t;










#endif