#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: input
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 otherwise -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
