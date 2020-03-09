#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - make a new dog structure
 *@name: dogs name
 *@age: dogs age
 *@owner: owners name
 *Return: pointer to a new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *ndog;

	ndog = malloc(sizeof(ndog));
	if (ndog == '\0')
		return ('\0');
	n = malloc(sizeof(name));
	if (n == '\0')
		return ('\0');
	o = malloc(sizeof(owner));
	if (o == '\0')
		return ('\0');
	ndog->name = n;
	ndog->age = age;
	ndog->owner = o;
	return (ndog);
}
