#include "dog.h"
#include <stdio.h>
/**
 * free_dog - a free dog
 * @d: dog info
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).owner);
	free((*d).name);
	free(d);
}
