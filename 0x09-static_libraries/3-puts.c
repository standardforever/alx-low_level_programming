#include "main.h"

/**
 * _puts - it print a string followed by a new line
 * @str: takes a char
 * Return: Is a void function(has no return type
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != str[-1])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
