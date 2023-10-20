#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * Return: length of the printed string
 */

int print_rev(va_list l)
{
	 va_list args;
    va_start(args, format);

    int i = 0;
    int j;
    char *s = va_arg(args, char *);

    if (!s)
        s = "(null)";

    while (s[i])
        i++;

    for (j = i - 1; j >= 0; j--)
        my_putchar(s[j]);

    va_end(args);
    
    return i;
}
