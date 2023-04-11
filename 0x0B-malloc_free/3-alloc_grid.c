#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: parameter
 * @height: parameter
 * Return: NULL if 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int m;
	int n;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		a[m] = malloc(sizeof(int) * width);

		if (a[m] == NULL)
		{
			for (; m >= 0; m--)
				free(a[m]);
			free(a);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			a[m][n] = 0;
	}
	return (a);
}
