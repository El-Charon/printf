#include "main.h"

/**
 * print_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */

int print_hex_aux(unsigned long int num)
{
   if (num == 0) {
        putchar('0');
        return 1;
    }

    int counter = 0;
    unsigned long int temp = num;

    while (temp > 0) {
        temp /= 16;
        counter++;
    }

    char *hexDigits = "0123456789ABCDEF";

    char *hexArray = (char *)malloc(counter * sizeof(char));
    if (hexArray == NULL) {
        return -1;
    }

    temp = num;

    int i;
    for (i = counter - 1; i >= 0; i--) {
        int digit = temp % 16;
        hexArray[i] = hexDigits[digit];
        temp /= 16;
    }

    for (i = 0; i < counter; i++) {
        putchar(hexArray[i]);
    }

    free(hexArray);

    return counter;
}