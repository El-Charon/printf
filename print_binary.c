#include "main.h"

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */

int print_binary(va_list list)
{
	  unsigned int num = va_arg(list, unsigned int);
    int len = 0;
    char binaryStr[32];

    if (num == 0) {
        putchar('0');
        return 1;
    }

    if (num < 1) {
        return -1;
    }

    while (num > 0) {
        binaryStr[len++] = (num % 2) ? '1' : '0';
        num /= 2;
    }

    binaryStr[len] = '\0';

    rev_string(binaryStr);

    printf("%s", binaryStr);

    return len;
}
