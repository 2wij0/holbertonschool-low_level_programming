#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop as long as characters match and we haven't hit the end */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			/* Return the difference in ASCII values */
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* If one string ended before the other, return the difference */
	return (s1[i] - s2[i]);
}
