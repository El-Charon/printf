#include "main.h"

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_string(va_list list)
{
        int i = 0;
    char *str = va_arg(list, char *);
    if (str == NULL) {
        str = "(null)";
    }

    while (str[i] != '\0') {
        _putchar(str[i]);
        i++;
    }

    return i;
}
