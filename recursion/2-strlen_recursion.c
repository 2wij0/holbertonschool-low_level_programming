#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we hit the end, return 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Return 1 (for current char) + result of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
