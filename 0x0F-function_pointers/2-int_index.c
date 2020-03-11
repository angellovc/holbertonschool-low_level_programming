#include <stdlib.h>
/**
 *int_index - use arrays as arguments to the functions call back
 *@array: int array
 *@size: array's size
 *@cmp: function pointer
 *Return: return i if call back return is succes, -1 if don't
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
