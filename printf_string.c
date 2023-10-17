#include "main.h"

/**
 * printf_string - prints a string
 * @args: numberof arguements
 * @toshow: the printed characters
 * Return: printed charcaters
 */

int printf_string(va_list args, int toshow)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		toshow++;
		string++;
	}
	return (toshow);
}