#include "main.h"

/**
 * print_triangle - it print a triangle using  #
 * @size: the size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k, n, l;

	n = 1;
	l = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (l == j)
				break;
			_putchar(' ');
		}
		l--;
		for (k = 0; k < size; k++)
		{
			if (n == k)
				break;
			_putchar('#');
		}
		n++;
		_putchar('\n');
	}
}
