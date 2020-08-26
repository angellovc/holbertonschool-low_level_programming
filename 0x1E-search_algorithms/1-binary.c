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
 *binary_search - binary search algorithm
 *@array: array
 *@size: array size
 *@value: value to search for
 *Return: the first occurence index or -1 in failure
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary(array, 0, size, value));
}
