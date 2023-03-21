#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @m: parameter
 * Return: 0
 */

void print_to_98(int m)
{
	int i;

	if (m >= 0 && m <= 98)
	{
		for (i = m ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (m < 0)
	{
		for (i = m ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	printf("\n");
	}
	else if (m > 98)
	{
		for (i = m ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (m == 98)
		printf("%d", m);
}

