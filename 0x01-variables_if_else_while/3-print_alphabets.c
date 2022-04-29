#include <stdio.h>

/**
 * main - print alphabet in low follow by upper
 * Return: 0
 */
int main(void)
{
	/* declearation of variable */
	char i, j;

	/* print small letters */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	/* print capital letters */
	for (j = 65; j <= 90; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
