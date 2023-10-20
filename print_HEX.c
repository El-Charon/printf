#include "main.h"

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */

int print_hex(va_list list)
{
	 unsigned int num;
    int len;
    int rem_num;
    char *hex_rep;
    char *rev_hex;

    num = va_arg(list, unsigned int);

    if (num == 0)
        return printf("0");

    if (num < 1)
        return -1;

    len = base_len(num, 16);
    hex_rep = (char*)malloc(len + 1);
    if (hex_rep == NULL)
        return -1;

    for (int i = 0; num > 0; i++) {
        rem_num = num % 16;
        if (rem_num > 9) {
            rem_num = hex_check(rem_num, 'x');
            hex_rep[i] = rem_num;
        } else {
            hex_rep[i] = rem_num + '0';
        }
        num = num / 16;
    }
    hex_rep[len] = '\0';

    rev_hex = rev_string(hex_rep);
    if (rev_hex == NULL) {
        free(hex_rep);
        return -1;
    }

    write_base(rev_hex);
    free(hex_rep);
    free(rev_hex);
    return len;
}
