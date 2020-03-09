#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - release a dog structure
 *@d: pointer to a dog structure you want to release
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
