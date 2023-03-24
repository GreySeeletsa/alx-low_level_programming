#include <stdio.h>
#include <math.h>
/**
 * main - program that finds and prints the largest prime factor
 * of 612852475143
 * Return: 0
 */

int main(void)
{
	long int a;
	long int max;
	long int b;

	a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}
	for (b = 3; b <= sqrt(a); b = b + 2)
	{
		while (a % b == 0)
		{
			max = b;
			a = a / b;
		}
	}
	if (a > 2)
		max = a;
	printf("%ld\a", max);
	return (0);
}
