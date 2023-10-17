#ifndef MAIN_H
#define MAIN_H

#define MAX_HEX_DIGITS 16

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int printf_char(va_list args, int toshow);
int printf_string(va_list args, int toshow);
int printf_integer(va_list args, int toshow);
int switcher(const char *format, va_list args, int toshow);
int printf_binary(unsigned int num, int toshow);
int _x(unsigned int num, int toshow, int uppercase);
int printf_octal(unsigned int num, int toshow);
int printf_unsigned(unsigned int num, int toshow);
int printf_reverse(va_list args, int toshow);
int printf_pointer(va_list args, int toshow);
int _putchar(char character);
int _printf(const char *format, ...);

#endif
