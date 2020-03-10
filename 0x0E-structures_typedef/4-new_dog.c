#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 *_strdup - copy a string into other
 *@str: string
 *Return: pointer to string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, y = 0;
	char *copy;

	if (str == '\0')
		return ('\0');
	while (str[i] != '\0')
		i++;
	i++;
	copy = malloc(i * sizeof(char));
	if (copy == '\0')
		return ('\0');
	while (y < (i * sizeof(char)))
	{
		copy[y] = str[y];
		y++;
	}
	return (copy);
}
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

	ndog = malloc(sizeof(dog_t));
	if (ndog == '\0')
		return ('\0');
	ndog->name = _strdup(name);
	if (ndog->name == '\0')
	{
		free(ndog);
		return ('\0');
	}
	ndog->age = age;
	ndog->owner = _strdup(owner);
	if (ndog->owner == '\0')
	{
		free(ndog->name);
		free(ndog);
		return ('\0');
	}
	return (ndog);
}
