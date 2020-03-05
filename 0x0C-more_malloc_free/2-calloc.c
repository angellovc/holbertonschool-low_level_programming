#include <stdlib.h>
/**
 *_calloc - this is a calloc function
 *@nmemb: number of elemets
 *@size: size of elements
 *Return: pointer to memory assignement
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == '\0' || size == 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == '\0')
		return ('\0');
	while (i < size)
	{
		p[i]= 0;
		i++;
	}
	return (p);
}
