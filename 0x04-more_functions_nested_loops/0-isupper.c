#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: to be checked
 * Return: 1 if uppercase otherwise 0
 */

int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
