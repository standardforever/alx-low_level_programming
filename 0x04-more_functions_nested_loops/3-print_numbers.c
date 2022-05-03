#include "main.h"

/**
 * print_numbers - print num from 0-9 using only putchar
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
