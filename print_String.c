#include "main.h"

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_string(va_list list)
{
    char *str = va_arg(list, char *);
    if (str == NULL) {
        str = "(null)";
    }

    int i = 0;
    while (str[i] != '\0') {
        _putchar(str[i]);
        i++;
    }

    return i;
}
