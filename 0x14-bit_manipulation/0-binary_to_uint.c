#include "main.h"

/**
 * _pow - it returns a to power b
 * @a: the number to find his power
 * @b: the power
 * Return: a raise to power b
 */

int _pow(int a, int b)
{
	int i, count = 1;

	for (i = 0; i < b; i++)
		count *= a;
	return (count);
}

/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *   there is one or more chars in the string b that is not 0 or 1
 *      b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, count = -1, add = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			count++;
		else
			return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
		{
			count--;
			continue;
		}
		add += _pow(2, count);
		count--;

	}
	return (add);
}
