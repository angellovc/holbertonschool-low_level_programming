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
	dog_t *ndog;

	ndog = malloc(sizeof(ndog));
	if (ndog == '\0')
		return ('\0');
	ndog->name = malloc(sizeof(name));
	if (ndog->name == '\0')
	{
		free(ndog);
		return ('\0');
	}
	ndog->owner = malloc(sizeof(owner));
	if (ndog->owner == '\0')
	{
		free(ndog);
		free(ndog->name);
		return ('\0');
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
