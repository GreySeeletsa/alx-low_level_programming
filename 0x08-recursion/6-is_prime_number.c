#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: 1 if int is prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - finds prime number
 * @n: input
 * @m: serves as iterator
 * Return: 1 if int is prime number otherwise 0
 */

int _prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (_prime(n, m - 1));
}
