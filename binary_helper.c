#include "main.h"

/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */

unsigned int base_len(unsigned int num, int base) {
    unsigned int length = 0;
    
    if (num == 0) {
        return 1; // Special case: 0 has a length of 1 in any base
    }
    
    while (num > 0) {
        num /= base;
        length++;
    }
    
    return length;
}

/**
 * reverseString - Reverses a string in place
 * @str: String to reverse
 */
void reverseString(char *str) {
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

/**
 * write_base - Sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
}

/**
 * _memcpy - Copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into a letter
 * @x: Tells which hex function is calling it
 * Return: ASCII value for a letter
 */
int hex_check(int num, char x) {
    char *hex_lower = "abcdef";
    char *hex_upper = "ABCDEF";
    
    if (x == 'x' && num >= 10 && num <= 15) {
        return hex_lower[num - 10];
    } else if (x == 'X' && num >= 10 && num <= 15) {
        return hex_upper[num - 10];
    }
    
    // If the character is not a valid hex digit, you should handle the error or return an appropriate value.
    return 0; // This is a placeholder; you may want to handle errors differently.
}
