#include "main.h"

int _printf(const char *format, ...) {
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format != '%') {
            putchar(*format);
            count++;
        } else {
            format++;
            if (*format == '\0') {
                break;
            } else if (*format == 'c') {
                char c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') {
                char *str = va_arg(args, char *);
                while (*str) {
                    putchar(*str);
                    str++;
                    count++;
                }
            } else if (*format == '%') {
                putchar('%');
                count++;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}