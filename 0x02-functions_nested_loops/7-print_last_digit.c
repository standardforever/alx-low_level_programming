#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number which the last digit will be printed
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	/* check if n is negative if yes multiple by -1*/
	if (n < 0)
		n *= -1;

	/* check if n divide 10, if remainder is zero the store it in n*/
	if (n % 10 == 0)
	{
		a = 0;
		_putchar('0');
	}

	/* if n divide 10 is not equal zero store the value in n*/
	if  (n % 10 > 0)
	{
		a = n % 10;
		_putchar(a + '0');
	}
	return (a);
}
