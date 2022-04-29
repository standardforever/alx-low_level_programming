#include <stdio.h>

/**
 * main - print all lower case letter except q and e
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
