#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: the arguements to use
 * @toshow: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list args, int toshow)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (toshow + 1);
}
