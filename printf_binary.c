#include "main.h"

/**
 * printf_binary - prints a binary number
 * @num: number arguements
 * @toshow: the printed characters
 * Return: printed charcaters
 */

int printf_binary(unsigned int num, int toshow)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		toshow++;
		return (toshow);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		toshow++;
	}

	return (toshow);
}
