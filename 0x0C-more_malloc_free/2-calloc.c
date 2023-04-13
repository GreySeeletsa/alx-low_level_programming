#include "main.h"
#include <stdlib.h>
/**
 * _memset - will give memory a constant byte
 * @a: area to be filled
 * @b: character
 * @c: how many times will 'b' be copied
 * Return: pointer
 */

char *_memset(char *a, char b, unsigned int c)
{
	unsigned int n;

	for (n = 0; n < c; n++)
	{
		a[n] = b;
	}
	return (a);
}
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);
	_memset(pointer, 0, nmemb * size);
	return (pointer);
}
