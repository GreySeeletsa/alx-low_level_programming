#include "main.h"
/**
 * _islower - prints lowercase
 * @c: to be printed if lowercase
 * Return: 1 when lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
