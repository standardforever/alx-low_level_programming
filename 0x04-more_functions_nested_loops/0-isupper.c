#include "main.h"

/**
 * _isupper - it checks for upper case letter
 * @c: the input character to check
 * Return: 1 if c is upper or 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
