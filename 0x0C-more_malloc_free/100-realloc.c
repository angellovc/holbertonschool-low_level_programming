#include <stdlib.h>
/**
 *_realloc - this is a realloc function
 *@ptr: string
 *@old_size: size of string
 *@new_size: size of new string
 *Return: pointer to a new string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *p;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return ('\0');
	}
	p = malloc(new_size * sizeof(char));
	if (p == '\0')
		return ('\0');
	for (i = 0; i < (old_size || new_size); i++)
		p[i] = *((char *)ptr + i);
	free(ptr);
	return (p);
}
