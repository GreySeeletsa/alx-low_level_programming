#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -  function that executes a function given as a
 * parameter on each element of an array
 * @array: parameter
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
