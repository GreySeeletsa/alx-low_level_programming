#include "main.h"
#include <stdlib.h>
/**
 * count - counts number of words in string
 * @s: string
 * Return: word count
 */

int count(char *s)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;

		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * strtow - function that splits a string into words
 * @str: string
 * Return:  NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **m;
	char *n;

	int r = 0;
	int t = 0;
	int p = 0;
	int w = 0;
	int q = 0;
	int y;
	int x;

	while (*(str + p))
		p++;
	w = count(str);
	if (w == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);
	for (r = 0; r <= p; r++)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (q)
			{	x = r;
				n = (char *) malloc(sizeof(char) * (q + 1));
				if (n == NULL)
					return (NULL);
				while (y < x)
					*n++ = str[y++];
				*n = '\0';
				m[t] = n - q;
				t++;
				q = 0;
			}
		} else if (q++ == 0)
			y = r;
	} m[t] = NULL;
	return (m);
}
