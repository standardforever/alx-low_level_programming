#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the half of a string
 * @str: the string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, k;

	k = 0;
	/* find the length of the string */
	i = 0;
	while (str[i] != '\0')
		i++;
	/* divide the length to two */
	if (i % 2 == 0)
	{
		k = i / 2;
		/* print the last half of the string */
		for (k = k; k <= i - 1; k++)
			_putchar(str[k]);
	}
	else
	{
		k = (i - 1) / 2;
		/*print the last half of the string */
		for (k = k + 1; k <= i - 1; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
