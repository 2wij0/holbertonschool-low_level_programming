#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The new size in bytes of the new memory block.
 *
 * Return: Pointer to the new memory block, or NULL if it fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i, limit;

	/* If new_size == old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If new_size is 0 and ptr is not NULL, equivalent to free(ptr) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Allocate the new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* We use char pointers to copy data byte by byte */
	old_ptr = ptr;

	/* Determine how much data to copy */
	if (new_size < old_size)
		limit = new_size;
	else
		limit = old_size;

	/* Copy the contents */
	for (i = 0; i < limit; i++)
		new_ptr[i] = old_ptr[i];

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
