#include "search_algos.h"
/**
 * interpolation_algorithm - interpolation algorithm implementation
 * @array: elements collection
 * @low: array low range
 * @high: array high range
 * @value: value to search for
 * Return: index of the searched element or 0 in failure
 **/
int interpolation_algorithm(int *array, size_t low, size_t high, int value)
{
	size_t pos = low + (
		T
		) * (value - array[low]);

	if (low > high || value < array[low] || value > array[high])
	{
		printf("Value checked array[%li] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%li] = [%i]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);

	if (array[pos] < value)
		return (interpolation_algorithm(array, pos + 1, high, value));
	else if (array[pos] > value)
		return (interpolation_algorithm(array, low, pos - 1, value));
	else
		return (-1);
}
/**
 * interpolation_search - prepare the terrain for
 * interpolation algorithm implementation
 * @array: elements collection
 * @size: array size
 * @value: value to search for
 * Return: index of the searched element or 0 in failure
 **/
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (interpolation_algorithm(array, 0, size - 1, value));
}
