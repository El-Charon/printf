#include "main.h"

int _printf(const char *format, ...) {
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format != '%') {
            _putchar(*format);
            count++;
        } else {
            format++;
            if (*format == '\0') {
                break;
            } else if (*format == 'c') {
                _putchar(va_arg(args, int));
                count++;
            } else if (*format == 's') {
                count = printf_string(args, count);
            } else if (*format == '%') {
                _putchar('%');
                count++;
            }
        }
        format++;
    }
    
    va_end(args);
    return count;
}