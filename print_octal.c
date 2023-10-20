#include "main.h"

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */

int print_octal(va_list list)
{
	   unsigned int num;
    int len;
    char *octal_rep;
    char *rev_str;

    num = va_arg(list, unsigned int);

    if (num == 0) {
        write_base("0");
        return 1;
    }

    if (num < 1) {
        return -1;
    }

    len = base_len(num, 8);

    octal_rep = (char*)malloc(len + 1);
    if (octal_rep == NULL) {
        return -1;
    }

    for (int i = 0; num > 0; i++) {
        octal_rep[i] = (num % 8) + '0';
        num = num / 8;
    }

    octal_rep[len] = '\0';

    rev_str = rev_string(octal_rep);
    if (rev_str == NULL) {
        free(octal_rep);
        return -1;
    }

    write_base(rev_str);

    free(octal_rep);
    free(rev_str);

    return len;
}

