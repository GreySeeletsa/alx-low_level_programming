#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that prints the sign of a number
 * @m: parameter
 * Return: 1, 0 and -1
 */

int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (m == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
