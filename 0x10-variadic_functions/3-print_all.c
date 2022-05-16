#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - it prints anything
 * Description: where format is a list of types of arguments passed to the
 *             function.
 *     c: char
 *     i: integer
 *     f: float
 *     s: char * (if the string is NULL, print (nil) instead
 *     any other char should be ignored
 * @format: is a list of types
 */

void print_all(const char *const format, ...)
{
	int i;
	va_list op;

	va_start(op, format);
	i = 0;
	while (i <= 3)
	{
		if (format[i] == 'c')
			printf("%c, ", va_arg(op, int));
		else if (format[i] == 'i')
			printf("%i, ", va_arg(op, int));
		else if (format[i] == 'f')
			printf("%f, ", va_arg(op, double));
		else if (format[i] == 's')
			printf("%s, ", va_arg(op, char *));
		i++;
	}
	va_end(op);
}