#include "main.h"
/**
 * print_times_table - function that prints the n times table
 * @n: parameter
 */

void print_times_table(int n)
{
	int i;
	int m;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (m = 0 ; m <= n ; m++)
			{
				p = m * i;
				if (m == 0)
				{
					_putchar(p + '0');
				} else if (p < 10 && m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				} else if (p >= 10 && p < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				} else if (p >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
