#include "dog.h"
/**
 *init_dog - intialize dog structure
 *@d: receive a pointer to a dog structure
 *@name: dogs name
 *@age: dogs age
 *@owner: owners dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		exit;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
