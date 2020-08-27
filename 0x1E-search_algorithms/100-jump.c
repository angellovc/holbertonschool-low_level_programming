#include "search_algos.h"
#include <math.h>
/**
 * jump_algorithm - jump algorithm implementation
 * @array: array
 * @position: array position
 * @size: array size
 * @value: value to search for
 * Return: index where the element was found, -1 in failure
 **/
int jump_algorithm(int *array, size_t size, size_t position, int value)
{
	size_t jump = (size_t)sqrt(size);

	if (array[position] >= value)
	{
		position = position - jump;
		printf("Value found between indexes [%li] and [%li]\n",
			position,
			position + jump
		);
		while (position <= position + jump)
		{
			printf("Value checked array[%li] = [%i]\n", position, array[position]);
			if (array[position] == value)
				return (position);
			position++;
		}
		return (-1);
	}
	else if (position > size)
	{
		position = position - jump;
		printf("Value found between indexes [%li] and [%li]\n",
			position,
			position + jump
		);
		while (position <= size)
		{
			printf("Value checked array[%li] = [%i]\n", position, array[position]);
			if (array[position] == value)
				return (position);
			position++;
		}
		return (-1);
	}
	printf("Value checked array[%li] = [%i]\n", position, array[position]);
	return (jump_algorithm(array, size, position + jump, value));
}
/**
 * jump_search - prepare the terrain for jump algorithm implementation
 * @array: array
 * @size: array size
 * @value: value to search for
 * Return: index where the element was found, -1 in failure
 **/
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (jump_algorithm(array, size - 1, 0, value));
}
