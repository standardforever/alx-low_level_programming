#include "main.h"

/**
 * _strlen_recursion - it returns a lenth of a string using recursion
 * @s: the string to print it lenth
 * Return: the lenth of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
