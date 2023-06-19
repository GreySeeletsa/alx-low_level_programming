#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: first address
 * @b: constant byte
 * @n: bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
