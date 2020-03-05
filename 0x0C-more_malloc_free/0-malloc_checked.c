#include <stdlib.h>
/**
 *malloc_checked - make a memory assignement
 *@b: number of memory
 *Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == '\0')
		exit(98);
	return (p);
}
