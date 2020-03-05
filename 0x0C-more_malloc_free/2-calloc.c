#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == '\0' || size == 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == '\0')
		return ('\0');
	return (p);
}
