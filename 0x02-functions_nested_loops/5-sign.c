#include "main.h"

/**
 * print_sign - it print sign of a number
 * @n: takes an integer and check for the condition
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * Return: it returns the condition that satisfy
 */
int print_sign(int n)
{
	int count;

	if (n > 0)
	{
		_putchar('+');
		count = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		count = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		count = -1;
	}
	return (count);
}
