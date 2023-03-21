#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int i;
	int n;
	int m;

	for (i = 0; i < 10 ; i++)
	{
		for (n = 0 ; n < 10 ; n++)
		{
			m = n * i;
			if (n == 0)
			{
				_putchar(m + '0');
			}
			if (m < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
