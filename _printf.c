#include <main.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;

    while (*format) {
        if (*format != '%') {
            putchar(*format);
            count++;
        } else {
            format++; // Move past '%'
            if (*format == '\0') {
                break; // If '%' is the last character, exit the loop
            } else if (*format == 'c') {
                // Character specifier
                char c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') {
                // String specifier
                char *str = va_arg(args, char *);
                while (*str) {
                    putchar(*str);
                    str++;
                    count++;
                }
            } else if (*format == '%') {
                // Print a literal '%'
                putchar('%');
                count++;
            }
        }
        format++; // Move to the next character in the format string
    }

    va_end(args);
    return count;
}