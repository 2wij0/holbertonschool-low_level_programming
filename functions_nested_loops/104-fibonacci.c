#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long f1_h = 0, f1_l = 1, f2_h = 0, f2_l = 2;
	unsigned long next_h, next_l, carry;
	unsigned long limit = 1000000000;

	for (count = 1; count <= 98; count++)
	{
		if (f1_h > 0)
			printf("%lu%09lu", f1_h, f1_l);
		else
			printf("%lu", f1_l);

		if (count != 98)
			printf(", ");

		/* Addition logic with carry */
		next_l = f1_l + f2_l;
		carry = next_l / limit;
		next_l %= limit;
		next_h = f1_h + f2_h + carry;

		/* Shift variables forward */
		f1_h = f2_h;
		f1_l = f2_l;
		f2_h = next_h;
		f2_l = next_l;
	}
	printf("\n");
	return (0);
}
