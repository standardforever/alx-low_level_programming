#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n-98, numbers most
 *              be printed in order, the first number should be the
 *              the number passed to your function
 * @n: the integer to start the printing from
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	/* checks if n is less than 0 */
	if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}

	/* checks if n is greater than 0 and less of equal to 98 */
	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}

	/* checks if n is greater than 98 */
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	putchar('\n');
}
