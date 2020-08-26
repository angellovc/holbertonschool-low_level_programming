#include "search_algos.h"
/**
 *linear_search -  function that searches for a value in
 *an array of integers using the Linear search algorithm
 * @array: elements collections
 * @size: array size
 * @value: value to search for
 * Return: array index of the coincidence or -1 in failure
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
