#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* Loop only until the middle of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap a[i] with the corresponding element from the end */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
