#include "main.h"

/**
 * main - it print "_putcahr" followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	char c[] = "_putchar";

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
