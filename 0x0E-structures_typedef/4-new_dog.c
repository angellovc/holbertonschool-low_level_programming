#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(ndog));
	if (ndog == '\0')
		return ('\0');
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
