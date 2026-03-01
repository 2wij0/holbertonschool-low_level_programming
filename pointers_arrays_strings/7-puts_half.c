#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting point */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		/* Formula for odd lengths provided in task */
		n = (len + 1) / 2;
	}

	/* Print from n to the end */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
