#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: value
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - finds natural square root of number
 * @n: value
 * @m: serves as an iterator
 * Return: square root
 */

int _sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
