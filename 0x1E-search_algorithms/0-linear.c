#include "search_algos.h"

/**
 * linear_search - searches for value in array of integers using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: num of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
