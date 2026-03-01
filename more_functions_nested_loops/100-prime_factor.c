#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143L;
	long div = 2;

	while (div * div <= n)
	{
		if (n % div == 0)
		{
			n /= div;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", n);

	return (0);
}
