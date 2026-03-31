#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The starting value (included).
 * @max: The ending value (included).
 *
 * Return: A pointer to the newly created array.
 * If min > max, returns NULL.
 * If malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the number of elements (inclusive) */
	size = (max - min) + 1;

	/* Allocate memory for the array of integers */
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
