#include "main.h"

/**
 * print_number - prints integer using only putchar
 * @n: the input integer to print
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
