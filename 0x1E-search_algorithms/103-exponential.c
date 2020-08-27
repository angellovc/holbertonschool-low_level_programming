#include "search_algos.h"
#include "search_algos.h"
/**
 *print_search - print an array section
 *in which binary functions are searching for
 * @array: array
 * @first: first array element
 * @last: last array element
 */
void print_search(int *array, size_t first, size_t last)
{
	size_t i = first;

	printf("Searching in array: ");
	for (; i <= last; i++)
		if (i < last)
			printf("%i, ", array[i]);
		else
			printf("%i", array[i]);
	printf("\n");
}
/**
 *binary - binary search algorithm
 *@array: array
 *@first: first array element
 *@last: last array element
 *@value: value to search for
 *Return: the first occurence index or -1 in failure
 */
int binary(int *array, size_t first, size_t last, int value)
{
	size_t mid = 0;

	mid = (first + last) / 2;

	print_search(array, first, last);

	if (array[mid] == value)
		return (mid);

	if (first >= last)
		return (-1);

	if (array[mid] < value)
		return (binary(array, mid + 1, last, value));
	return (binary(array, first, mid - 1, value));
}
/**
 *expo_algorithm - exponential algorithm implementation
 *@array: array
 *@size: array size
 *@position: current position
 *@value: value to search for
 *Return: the first occurence index or -1 in failure
 */
int expo_algorithm(int *array, size_t size, size_t position, int value)
{
	size_t last;

	if (size < position)
		last = size;
	else
		last = position;
	if (value < array[position] || position > size)
	{
		printf("Value found between indexes [%li] and [%li]\n", position / 2, last);
		return (binary(array, position / 2, last, value));
	}
	printf("Value checked array[%li] = [%i]\n", position, array[position]);
	return (expo_algorithm(array, size, position * 2, value));
}
/**
 *exponential_search - prepare the terrain for exponential
 *search algorithm implementation
 *@array: array
 *@size: array size
 *@value: value to search for
 *Return: the first occurence index or -1 in failure
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	return (expo_algorithm(array, size - 1, 1, value));
}
