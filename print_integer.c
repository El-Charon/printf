#include "main.h"

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}


/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int print_number(va_list args)
{
    int n = va_arg(args, int);
    int len = 0;
    unsigned int num;

    if (n < 0) {
        len += _putchar('-');
        num = -n;
    } else {
        num = n;
    }

    if (num == 0) {
        len += _putchar('0');
        return len;
    }

    int divisor = 1;
    while (num / divisor >= 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = num / divisor;
        len += _putchar('0' + digit);
        num %= divisor;
        divisor /= 10;
    }

    return len;
}


