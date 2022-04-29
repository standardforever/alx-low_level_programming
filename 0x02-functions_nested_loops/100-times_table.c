#include "main.h"

/**
 * long_value - print numbers greater than  9 with putchar
 * @val: the number
 * Return: nothing
 */
void long_value(int val)
{
	if (val / 10)
		long_value(val / 10);
	/* print the last digit */
	_putchar(val % 10 + '0');
}

/**
 * print_times_table(int n)
 * @n: the number of times table to be printed
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, count;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
		}
		for (i = 0; i <= n; i++)
		{
			for (count = 0; count <= n; count++)
			{
				j = i;
				j *= count;
				if (j == 0 && i >= 1)
				{
					_putchar('0');
				}
				if (j > 0 && j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(j + '0');
				}
				if (j > 9 && j < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					long_value(j);
				}
				if (j >= 100)
				{
					_putchar(',');
					_putchar(' ');
					long_value(j);
				}
			}
			_putchar('\n');
		}
	}
}
