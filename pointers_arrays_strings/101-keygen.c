#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum < 2772 - 122)
	{
		/* Generate random char between '!' (33) and 'z' (122) */
		c = (rand() % 89) + 33;
		sum += c;
		putchar(c);
	}

	/* Find the exact character needed to reach 2772 */
	putchar(2772 - sum);

	return (0);
}
