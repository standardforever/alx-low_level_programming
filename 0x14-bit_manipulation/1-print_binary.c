#include "main.h"

/**
 * print_binary - it print binary representation of a number
 * @n: the number to be converted to binary
 * Return: nothing, of type void
 */

void print_binary(unsigned long int n)
{
	unsigned long int count, hold;

	hold = n;
	n = n >> 1;
	count = n * 2;
	count = hold - count;
	if (n != 0)
		print_binary(n);
	_putchar(count + '0');
}
