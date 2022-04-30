#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number which the last digit will be printed
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	/* check if n is negative if yes multiple by -1*/
	if (a < 0)
		a = a * -1;
	_putchar(a + '0');

	return (a);
}
