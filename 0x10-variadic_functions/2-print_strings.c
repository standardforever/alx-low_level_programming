#include "variadic_functions.h"

/**
 * print_strings - it prints the string in the function
 * @separator: is the string to be printed between the strings
 * @n: the number of strings to enter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(op, char *);
		if (str)
			printf("%s", str);
		else
			printf("%s", "(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(op);
}
