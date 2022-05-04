#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times character \ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	int a, j, i;

	a = 1;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for  (j = 0;  j < n; j++)
			{
				if (a == j)
					break;
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
