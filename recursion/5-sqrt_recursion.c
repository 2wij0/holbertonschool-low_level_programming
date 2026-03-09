#include "main.h"

/**
 * find_sqrt - helper function to find the natural square root.
 * @n: the number to find the square root of
 * @guess: the current number to check
 *
 * Return: the square root or -1
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to check
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}
