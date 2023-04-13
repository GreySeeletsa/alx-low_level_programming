#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string 1
 * @s2: sting 2
 * @n: bytes
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int m1 = 0;
	unsigned int m2 = 0;

	while (s1 && s1[m1])
		m1++;
	while (s2 && s2[m2])
		m2++;
	if (n < m2)
		str = malloc(sizeof(char) * (m1 + n + 1));
	else
		str = malloc(sizeof(char) * (m1 + m2 + 1));
	if (!str)
		return (NULL);
	while (a < m1)
	{
		str[a] = s1[a];
		a++;
	}
	while (n < m2 && a < (m1 + n))
		str[a++] = s2[b++];
	while (n >= m2 && a < (m1 + m2))
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}
