#ifndef __MY_LOG__
#define __MY_LOG__

#include <stdio.h>
#include <stdarg.h>

#ifdef DEBUG
    #define Log_msg(format, ...) fprintf(stderr, "%s: " format "\n", __func__, ##__VA_ARGS__)
#else
    #define Log_msg(format, ...) {}
#endif

#endif

