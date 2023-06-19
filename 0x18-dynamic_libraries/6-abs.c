#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @m: parameter
 * Return: m
 */

int _abs(int m)
{
	if (m < 0)
		m = -(m);
	else if (m >= 0)
		m = m;
	return (m);
}
