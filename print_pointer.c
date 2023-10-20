#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int print_pointer(va_list val)
{
	 void *p = va_arg(val, void*);

    if (p == NULL)
    {
        char *s = "(nil)";
        int i;
        for (i = 0; s[i] != '\0'; i++)
        {
            _putchar(s[i]);
        }
        return i;
    }

    unsigned long int a = (unsigned long int)p;
    _putchar('0');
    _putchar('x');

    int b = print_hex_aux(a);
    return b + 2;
}

