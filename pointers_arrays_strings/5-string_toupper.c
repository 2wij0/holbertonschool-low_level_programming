#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/* Check if the character is lowercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* Subtract 32 to get the uppercase equivalent */
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
