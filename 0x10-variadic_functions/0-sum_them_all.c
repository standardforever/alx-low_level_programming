#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all the parameters
 * @n: the total numbers of parameters
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i, sum;

	sum = 0;
	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
