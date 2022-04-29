#include <stdio.h>

/**
 * main - prints all possible combination of two two-digit numbers.
 * numbers range from 0-99.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * The combination of numbers should be printed in ascending order.
 * 00 01 and 01 00 are consider thesame combination of the numbers 0 and 1.
 * Return: 0
 */
int main(void)
{
	int i, j;

	/* set the range of value for (1st, 2nd, 3rd, 4th)digit */
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			/* check if (i is less than j) digit */
			/*if YES print the digit*/
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				/* Don't print ',' & ' ' at the last counts*/
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
