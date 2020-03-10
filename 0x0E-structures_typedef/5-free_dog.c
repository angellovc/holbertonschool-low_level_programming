#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - release a dog structure
 *@d: pointer to a dog structure you want to release
 */
void free_dog(dog_t *d)
{
	if (d->name != '\0')
		free(d->name);
	if (d->owner != '\0')
		free(d->owner);
	if (d != '\0')
		free(d);
	free(my_dog);

}
