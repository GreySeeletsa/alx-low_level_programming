#include "main.h"
/**
 * print_binary -  function that prints the binary
 * representation of a number
 * @n: element
 */

void print_binary(unsigned long int n)
{
	int a, calc = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;
		if (curr & 1)
		{
			_putchar('1');
			calc++;
		}
		else if (calc)
			_putchar('0');
	}
	if (!calc)
		_putchar('0');
}

