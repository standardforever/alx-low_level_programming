#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse other
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
