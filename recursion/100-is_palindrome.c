#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome.
 * @s: string to check
 * @i: left index
 * @len: length of the string (used to find right index)
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);
	len = _strlen_recursion(s);
	return (check_pal(s, 0, len));
}
