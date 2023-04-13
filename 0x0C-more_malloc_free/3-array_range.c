#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: lowest
 * @max: highest
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int a;
	int b;

	if (min > max)
		return (NULL);
	b = max - min + 1;

	pointer = malloc(sizeof(int) * b);
	if (pointer == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		pointer[a] = min++;
	return (pointer);
}
