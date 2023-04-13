#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer to old memory
 * @old_size: size of memory
 * @new_size: size of new memory
 * Return: If new_size == old_size do not do anything and return ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	char *opt;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);
	opt = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			pointer[a] = opt[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			pointer[a] = opt[a];
	}
	free(ptr);
	return (pointer);
}
