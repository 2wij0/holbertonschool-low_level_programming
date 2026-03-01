#include "main.h"

/**
 * rev_string - reverses a string in memory
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char tmp;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Swap characters from outside in */
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
