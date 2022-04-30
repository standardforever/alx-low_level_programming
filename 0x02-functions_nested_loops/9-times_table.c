#include "main.h"

/**
 * long_value - print long value using putchar(value > 9)
 * @val: takes in the long value and print
 * Return: nothing
 */
void long_value(int val)
{
	/* checks if val is great than 9 if yes */
	/* remove the last digit and recur */
	if (val / 10)
		long_value(val / 10);
	/* print the last digit */
	_putchar(val % 10 + '0');
}

/**
 * space - required space
 * Return: nothhing
 */
void space(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * times_table - print times table starting from 0-9
 * Return: nothing
 */

void times_table(void)
{
	int count;
	int j, i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		if (i != 9)
		{
			space();
		}
	}
	for (i = 0; i <= 9; i++)
	{
		for (count = 0; count <= 9; count++)
		{
			j = i;
			j *= count;

			if (j == 0 && i >= 1)
			{
				_putchar('0');
			}
	  /* if the j < 9, it should send the value to short_value function*/
			/* else send to the long value function */
			if (j > 0 && j <= 9)
			{
				space();
				_putchar(j + '0');
			}
			if (j > 9)
			{
				_putchar(',');
				_putchar(' ');
				long_value(j);
			}
		}		_putchar('\n');
	}
}
