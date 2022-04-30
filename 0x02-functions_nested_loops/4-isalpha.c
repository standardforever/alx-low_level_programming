#include "main.h"

/**
 * _isalpha - function that check for alphabetic character
 * @c: the input variable
 * Return: 1 if c is a letter, lowercase or uppercase other wise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
