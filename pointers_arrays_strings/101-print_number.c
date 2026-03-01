#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int n1;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}

	/* Recursive step: peel off the last digit */
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	/* Print the current last digit */
	_putchar((n1 % 10) + '0');
}
