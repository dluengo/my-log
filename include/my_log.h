#ifndef __MY_LOG__
#define __MY_LOG__

#include <stdio.h>

#if DEBUG
    #define Log_msg(format, ...) printf("%s: " format "\n", __func__, __VA_ARGS__)
#else
    #define Log_msg(format, ...) {}
#endif

#endif

