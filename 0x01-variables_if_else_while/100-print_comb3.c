#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 * Return: 0
 */
int main(void)
{
	int i, j;

	/* setting the 1^st and 2^nd digit to range from 0-9 & 1-9 using ASCII */
	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			/* give condition that consider 01 and 10 thesame */
			/* print only the smallest condition */
			/* and skip the combination of 2 same digit */
			if (i >= j)
				continue;
			putchar(i);
			putchar(j);
			/* stop to print "," and " " to elast end of the digit*/
			if (i == 56 &&  j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
