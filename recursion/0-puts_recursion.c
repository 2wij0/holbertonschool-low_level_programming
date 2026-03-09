#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Base case: if we reach the null byte */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print the current character */
	_putchar(*s);

	/* Recursive call: move to the next character address */
	_puts_recursion(s + 1);
}
