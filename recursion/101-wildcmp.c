#include "main.h"

/**
 * wildcmp - compares two strings with wildcard support.
 * @s1: the first string (normal)
 * @s2: the second string (can contain *)
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* Base Case: both reached the end */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If characters match, move both forward */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* Wildcard logic */
	if (*s2 == '*')
	{
		/* If s2 has another * next, skip this one to avoid extra recursion */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* Branch 1: Treat * as empty (skip s2's *) OR */
		/* Branch 2: Treat * as a char (skip s1's char) */
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}

	return (0);
}
