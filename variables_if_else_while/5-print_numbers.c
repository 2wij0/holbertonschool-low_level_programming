#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
