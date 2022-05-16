#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - it prints the string in the function
 * @separator: is the string to be printed between the strings
 * @n: the number of strings to enter
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	va_start(op, n);
	for (i = 0; i < n ; i++)
	{
		printf("%s", va_arg(op, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(op);
	putchar('\n');
}
