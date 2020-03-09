#include "dog.h"
#include <stdio.h>
/**
 *print_dog - display items inside dog structure
 *@d: pointer to a declared dog structure
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
		return;
	if (d->name == '\0')
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == '\0')
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
