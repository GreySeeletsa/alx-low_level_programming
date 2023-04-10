#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: character
 * @c: string
 * Return: pointer otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}
