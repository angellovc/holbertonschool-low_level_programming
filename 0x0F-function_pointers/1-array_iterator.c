#include <stdlib.h>
/**
 *array_iterator - function call back inside each elements from an array
 *@array: string
 *@size: strings size
 *@action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == '\0')
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
