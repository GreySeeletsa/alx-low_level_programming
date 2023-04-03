#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: parameter
 * @size: parameter
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int m;
	int n;
	int p;

	m = 0;
	n = 0;

	for (p = 0; p < size; p++)
	{
		m = m + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		n += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", m, n);
}
