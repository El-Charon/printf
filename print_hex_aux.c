#include "main.h"

/**
 * print_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */

int print_hex_aux(unsigned long int num)
{
   if (num == 0) {
        putchar('0'); // Special case: print '0' for input 0
        return 1;
    }

    int counter = 0;
    unsigned long int temp = num;

    // Calculate the number of hexadecimal digits required
    while (temp > 0) {
        temp /= 16;
        counter++;
    }

    char *hexDigits = "0123456789ABCDEF"; // Array to map integers to hexadecimal characters

    // Create an array to store the hexadecimal digits
    char *hexArray = (char *)malloc(counter * sizeof(char));
    if (hexArray == NULL) {
        return -1; // Memory allocation failed
    }

    temp = num; // Reset temp to the original number

    // Calculate and store the hexadecimal digits in reverse order
    for (int i = counter - 1; i >= 0; i--) {
        int digit = temp % 16;
        hexArray[i] = hexDigits[digit];
        temp /= 16;
    }

    // Print the hexadecimal digits
    for (int i = 0; i < counter; i++) {
        putchar(hexArray[i]);
    }

    free(hexArray); // Free the allocated memory

    return counter; // Return the number of hexadecimal digits
}
