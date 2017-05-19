#ifndef TYPES_H
#define TYPES_H

typedef char byte;
typedef char int8;
typedef unsigned char uint8;

typedef short int int16;
typedef unsigned short int uint16;

typedef int int32;
typedef unsigned int uint32;

typedef long int int64;
typedef unsigned long int uint64;

#define low_16(address) (uint16)((address) & 0xFFFF)
#define high_16(address) (uint16)(((address) >> 16) & 0xFFFF)

#endif
