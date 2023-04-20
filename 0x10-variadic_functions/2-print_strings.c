#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *a;
	unsigned int b;

	va_start(strings, n);

	for (b = 0; b < n; b++)
	{
		a = va_arg(strings, char *);

		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
