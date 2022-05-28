#include "main.h"

/**
 * _puts_recursion - it print a string using recursion
 * @s: the string to be printed
 * Return: nothing of type void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	if (*s == '\0')
		_putchar('\n');
}
