#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - it print numbers
 * @seperator: it use to seperate the numbers
 * @n: the numbers to be printed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(op);
	putchar('\n');
}
