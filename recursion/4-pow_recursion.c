#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base value
 * @y: the exponent value
 *
 * Return: the result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* Error handling for negative exponents */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: x^0 = 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive step: x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
