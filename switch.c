#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @toshow: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int switcher(const char *format, va_list args, int toshow)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			toshow = printf_integer(args, toshow);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			toshow++;
			break;
		case 's':
			toshow = printf_string(args, toshow);
			break;
		case '%':
			_putchar('%');
			toshow++;
			break;
		case 'b':
			toshow = printf_binary(va_arg(args, unsigned int), toshow);
			break;
		case 'x':
		case 'X':
			toshow = _x(va_arg(args, unsigned int), toshow, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			toshow = printf_octal(va_arg(args, unsigned int), toshow);
			break;
		case 'u':
			toshow = printf_unsigned(va_arg(args, unsigned int), toshow);
			break;
		case 'r':
			toshow = printf_reverse(args, toshow);
			break;
		case 'p':
			toshow = printf_pointer(args, toshow);
			break;
		default:
			break;
	}
	return (toshow);
}
