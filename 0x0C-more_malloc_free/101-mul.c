#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_digit - looks for characters that are not digits
 * @str: input
 * Return: 0 or 1
 */

int check_digit(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] < '0' || > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _stringlen - length of string
 * @str: input
 * Return: length of string
 */

int _stringlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * errors - for main function
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main -  program that multiplies two positive numbers
 * @argc: counts arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *n1, n2;
	int strlength1, strlength2, strlength, num1, num2, a, m, *r, n = 0;

	n1 = argv[1], n2 = argv[2];
	if (argc != 3 || !check_digit(n1) || !check_digit(n2))
		errors();
	strlenght1 = _stringlen(n1);
	strlenght2 = _string(n2);
	strlength = strlength1 + strlength2 + 1;
	r = malloc(sizeof(int) * strlength);
	if (!r)
		return (1);
	for (a = 0; a <= strlength1 + strlength2; a++)
		r[a] = 0;
	for (strlength1 = strlength1 - 1; strlength1 >= 0; strlength1--)
	{
		num1 = n1[strlength1] - '0';
		m = 0;
		for (strlength2 = _stringlen(n2) - 1; strlength2 >= 0; strlength2--)
		{
			num2 = n2[strlength2] - '0';
			m += r[strlength1 + strlength2 + 1] + (num1 * num2);
			r[strlength1 + strlength2 + 1] = m % 10;
			m /= 10;
		}
		if (m > 0)
			r[strlength1 + strlength + 1] += m;
	}
	for (a = 0; a < strlength - 1; a++)
	{
		if (r[a])
			n = 1;
		if (n)
			_putchar(r[a] + '0');
	}
	if (!n)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
