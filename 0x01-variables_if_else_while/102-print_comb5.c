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
	int i, j, k, l;

	/* set the range of value for (1st, 2nd, 3rd, 4th)digit */
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 49; l <= 57; l++)
				{
				 /* check if (2nd >= 4th or 1st > 3rd)digit */
				     /*if YES skip the digit(don't print)*/
					if (j >= l || i > k)
						continue;
					/* if NO print */
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
       				/* Don't print ',' & ' ' at the last count*/
					if (i == 57 && j == 56)
						if (k == 57 && l == 57)
							break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
