#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int m;
	int p;

	for (i = 0 ; i < 10 ; i++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			for (p = 2 ; p < 10 ; p++)
			{
				if (i < m && m < p)
				{
					putchar(i + '0');
					putchar(m + '0');
					putchar(p + '0');
					if (i + m + p != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

