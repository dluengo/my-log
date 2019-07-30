#ifndef __MY_LOG__
#define __MY_LOG__

#include <stdio.h>
#include <stdarg.h>

static inline void Log_msg(const char *format, ...) {
#if DEBUG
    va_list args;

    va_start(args, format);
    fprintf(stderr, format, args);
    va_end(args);
#endif
}

#endif

