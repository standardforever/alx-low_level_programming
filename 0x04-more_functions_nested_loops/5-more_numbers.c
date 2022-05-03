#include "main.h"

/**
 * long_value - prints nunbers greater than 9 with putchar
 * @val: the number
 * Return: nothing
 */
void long_value(int val)
{
	if (val / 10)
		long_value(val / 10);
	_putchar(val % 10 + '0');
}

/**
 * more_numbers - prints 10 times the numbers, from 0-14
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
			if (j > 9)
				long_value(j);
			else
				_putchar(j + '0');
		_putchar('\n');
	}
}
