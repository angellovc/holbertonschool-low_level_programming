#include "dog.h"
#include <stdio.h>
/**
 *print_dog - display items inside dog structure
 *@d: pointer to a declared dog structure
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->owner);
}
