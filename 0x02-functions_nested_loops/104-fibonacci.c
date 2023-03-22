#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Purpose - not allowed to hard code any Fibonacci number
 * Return: (Pass)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int b = 1;
	unsigned long int a = 2;
	unsigned long int k = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int a1;
	unsigned long int a2;

	printf("%lu ", b);

	for (i = 1 ; i < 91 ; i++)
	{
		printf(",%lu ", a);
		a += b;
		b = a - b;
	}
	b1 = (b / k);
	b2 = (b % k);
	a1 = (a / k);
	a2 = (a % k);
	for (i = 92 ; i < 99 ; ++i)
	{
		printf(",%lu ", a1 + (a2 / k));
		printf("%lu ", a2 % k);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
