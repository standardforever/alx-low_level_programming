#include "main.h"

/**
 * _strlen - it returns the lenth of a string
 * @s: the string that the length will be return
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
