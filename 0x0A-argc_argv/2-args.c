#include <stdio.h>
#include "main.h"
/**
 * main - arguments should be printed,including the first one
 * @argv: argument vector
 * @argc: counts arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
