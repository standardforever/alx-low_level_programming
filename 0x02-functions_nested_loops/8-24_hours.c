#include "main.h"

/**
 * jack_bauer - it print every minute of the day of Jack Bauer
 *              starting form 00:00 to 23:59
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				if (i == 2 && j == 3 && l == 9 && k == 5)
					break;
				k++;
			}
			if (i == 2 && j == 3)
				break;
			j++;
		}
		if (i == 2 && j == 3)
			break;
		i++;
	}
}
