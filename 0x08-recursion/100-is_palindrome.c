#include "main.h"

/**
 * _strlen - find the length of the string
 * @s: the string to find the length
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count = count + _strlen(s + 1);
	}
	return (count);
}

/**
 * str - it compares the string from left and right
 * @len: the length of the string
 * @s: the string to compare
 * Return: 1 if true else 0
 */

int str(char *s, int len)
{
	if (len <= 0)
		return (1);
	if (*s == s[len - 1])
		return (str((s + 1), len - 2));
	else
		return (0);
}

/**
 * is_palindrome - it checks if a string is palindrome
 * @s: the character to check
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen(s);
	return (str(s, l));
}
