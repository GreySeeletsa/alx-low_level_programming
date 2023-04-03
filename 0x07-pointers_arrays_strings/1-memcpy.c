#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int p = n;

	for (; m < p; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);

}
