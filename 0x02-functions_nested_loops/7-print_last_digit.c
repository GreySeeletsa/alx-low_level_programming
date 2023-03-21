#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @m: parameter
 * Return: n
 */

int print_last_digit(int m)
{
	int n;

	n = m % 10;
	if (m < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}

