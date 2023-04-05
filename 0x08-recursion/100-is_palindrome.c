#include "main.h"
/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if string is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _stringlen(s)));
}

/**
 * _stringlen - function that counts lenght of string
 * @s: string
 * Return: 1 if string is palindrome otherwise 0
 */

int _stringlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _stringlen(s + 1));
}

/**
 * _palindrome - will return 1 if string is 0
 * @s: string
 * @m: value
 * @n: value
 * Return: 1 if string is palindrome otherwise 0
 */

int _palindrome(char *s, int m, int n)
{
	if (*(s + m) != *(s + n - 1))
		return (0);
	if (m >= n)
		return (1);
	return (_palindrome(s, m + 1, n - 1));
}
