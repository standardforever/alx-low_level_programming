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
 * space - required space
 * Return: nothing
 */
void space(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * less_than_100 - if the count is greater than or equal 100
 * Return: nothing
 */
void less_than_100(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * more_than_100 - count is more than 100
 * Return: nothing
 */

void more_than_100(void)
{
	_putchar(',');
	_putchar(' ');
}
/**
 * print_times_table - print nth times table
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
				space();
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
					space();
					_putchar(j + '0');
				}
				if (j > 9 && j < 100)
				{
					less_than_100();
					long_value(j);
				}
				if (j >= 100)
				{
					more_than_100();
					long_value(j);
				}
			}
			_putchar('\n');
		}
	}
}
