#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 * If nmemb or size is 0, returns NULL.
 * If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size, i;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total memory needed */
	total_size = nmemb * size;

	/* Allocate memory */
	ptr = malloc(total_size);

	/* Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
