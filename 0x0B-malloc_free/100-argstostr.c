#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: parameter
 * @av: parameter
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c = 0;
	int d = 0;

	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	m = malloc(sizeof(char) * d + 1);

	if (m == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			m[c] = av[a][b];
			c++;
		}
		if (m[c] == '\0')
		{
			m[c++] = '\n';
		}
	}
		return (m);
}
