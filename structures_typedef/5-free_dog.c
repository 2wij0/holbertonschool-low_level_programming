#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to the dog_t struct to be freed
 *
 * Description: Frees the memory allocated for name, owner, and the struct.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the strings inside the struct first */
	free(d->name);
	free(d->owner);

	/* Finally, free the struct itself */
	free(d);
}
