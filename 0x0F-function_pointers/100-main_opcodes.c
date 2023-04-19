#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;
	int m;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (m = 0; m < n; m++)
	{
		if (m == n - 1)
		{
			printf("%02hhx\n", p[m]);
			break;
		}
		printf("%02hhx", p[m]);
	}
	return (0);
}
