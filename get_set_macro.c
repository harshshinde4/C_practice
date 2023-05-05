Implement two macros

set the byte
get the byte

macro 1 input
integer, size in bytes, byte number to get

macro 2 input
integer, size in bytes, byte number to set, byte val

#define GET_BYTE(n, N, k)       ((int)(*(unsigned char*)((char*)&n + ((k)-1))))
#define SET_BYTE(n, N, k, v)    *(unsigned char*)((char*)&n + ((k)-1)) = v
