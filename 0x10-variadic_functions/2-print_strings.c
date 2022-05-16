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
	char *str;

	va_start(op, n);
	for (i = 0; i < n ; i++)
	{
		str = va_arg(op, char *);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(op);
	putchar('\n');
}
