#include "main.h"
/**
 * get_bit - function that returns the value of a bit at index
 * @n: element
 * @index: starts from 0 of the bit you want to get
 * Return: the value of the bit at index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
		return (-1);

	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
