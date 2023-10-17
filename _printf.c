#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int toshow = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			toshow = selector(format, args, toshow);
			format++;
		}
		else
		{
			_putchar(*format);
			toshow++;
			format++;
		}
	}
	va_end(args);
	return (toshow);
}
