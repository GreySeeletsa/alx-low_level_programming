#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int m,n,next,sum;

	m = 1;
	n = 2;
	sum = 0;

	for (i = 1 ; i <= 33 ; ++i)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		next = m + n;
		m = n;
		n = next;
	}

	printf("%lu\n", sum);
	return (0);
}


