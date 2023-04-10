#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  program that prints the minimum number of coins to
 * make change for an amount of money
 * @argv: argument vector
 * @argc: counts arguments
 *
 * Return: 1 otherwise Error
 */

int main(int argc, char *argv[])
{
	int m;
	int n;
	int p;

	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	p = 0;

	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (n = 0; n < 5 && m >= 0; n++)
	{
		while (m >= coin[n])
		{
			p++;
			m -= coin[n];
		}
	}
	printf("%d\n", p);
	return (0);
}
