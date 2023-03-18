#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int m;

	for (i = 0 ; i < 100 ; i++)
	{
		for (m = 0 ; m < 100 ; m++)
		{
			if (i < m)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (i != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
