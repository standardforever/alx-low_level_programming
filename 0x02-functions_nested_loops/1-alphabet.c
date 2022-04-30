#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line
 * You are not allow to use the standard library
 * You can only use _putchar twice in your code
 * Return: Nothing  (type void)
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c >= 97 && c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
