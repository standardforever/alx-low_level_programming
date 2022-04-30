#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: takes an integer
 * Returns 1 if c is lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
	int count;

	if (c >= 97 && c <= 122)
		count = 1;
	else
		count = 0;
	return (count);
}
