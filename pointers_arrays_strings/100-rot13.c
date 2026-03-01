#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			/* The only allowed 'if' check */
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break; /* Optimization to stop inner loop once match is found */
			}
		}
	}

	return (s);
}
