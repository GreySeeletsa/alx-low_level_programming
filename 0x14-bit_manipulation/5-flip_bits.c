#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, calc = 0;
	unsigned long int curr;
	unsigned long int diff = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = diff >> a;
		if (curr & 1)
			calc++;
	}
	return (calc);
}
