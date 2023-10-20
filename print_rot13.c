#include "main.h"

/**
 * print_rot13 - prints a string using rot13
 * @list: list of arguments from _printf
 * Return: length of the printed string
 */

int print_rot13(va_list list) {
        int i = 0;
    char *str = va_arg(list, char *);
    if (str == NULL) {
        return -1;
    }

    while (str[i] != '\0') {
        char c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';
            _putchar(base + (c - base + 13) % 26);
        } else {
            _putchar(c);
        }
        i++;
    }

    return i;
}
