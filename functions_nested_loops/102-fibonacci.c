#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, next;

	for (count = 0; count < 50; count++)
	{
		if (count == 49)
		{
			printf("%lu", fib1);
		}
		else
		{
			printf("%lu, ", fib1);
		}

		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");

	return (0);
}
