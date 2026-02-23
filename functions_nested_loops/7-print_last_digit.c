#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
    int last;

    last = n % 10;       /* get last digit */
    if (last < 0)
        last = -last;    /* make positive if negative */

    _putchar('0' + last); /* print as character */
    return (last);
}
