#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * n - does the string contain numbers
 * @s: string
 * Return: 0
 */

int n(char *s)
{
	unsigned int a;

	a = 0;

	while (a < strlen(s))
	{
		if (!isdigit(s[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argv: argument vector
 * @argc: count argument
 * Return: 0 or 1 if  number contains symbols
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c = 0;

	a = 1;
	while (a < argc)
	{
		if (n(argv[a]))
		{
			b = atoi(argv[a]);
			c += b;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", c);

	return (0);
}
