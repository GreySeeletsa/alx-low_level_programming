#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argv: argument vector
 * @argc: count argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
