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
		/* Convert to unsigned to handle INT_MIN safely */
		n1 = -n;
	}
	else
	{
		n1 = n;
	}

	/* Recursion: Remove the last digit and call function again */
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	/* Print the last digit (remainder) */
	_putchar((n1 % 10) + '0');
}
