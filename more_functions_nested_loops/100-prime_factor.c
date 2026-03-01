#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long long n = 612852475143;
	long long div = 2;

	while (div < sqrt(n))
	{
		if (n % div == 0)
		{
			n = n / div;
		}
		else
		{
			div++;
		}
	}
	printf("%lld\n", n);

	return (0);
}
