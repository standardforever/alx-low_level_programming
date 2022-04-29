#include <stdio.h>

/**
 * main - it print the alphabet in lowercase
 * Return: it returns 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
