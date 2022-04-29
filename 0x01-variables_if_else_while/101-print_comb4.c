#include <stdio.h>

/**
 * main - it print all possible different combination of three digits,
 *   the three digit must be different.
 * 012, 120, 102, 021, 210 are considered the same combination of the digit 0,1
 *  ,2.
  * print only the smallest combination of three digits and in ascending order.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	/*set 1^st, 2^nd & 3^rd digit to range 0-9, 1-9, & 2-9 using ASCII*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
			    /*checking if (1st <= 2nd <= 3rd)digit if yes skip*/
				if ((i >= j || j >= k))
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
			  /*elminating the ',' and ' ' at the end of our line*/
				if (i == 55)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
