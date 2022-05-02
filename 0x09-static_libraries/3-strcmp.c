#include "main.h"
#include <stdio.h>

/**
 * _strcmp - it compares two strings
 * @s1: first string to be compare
 * @s2: secong string to be compare with the first string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int a = 0;

	while (s1[a] != '\0' && count == 0)
	{
		count = s1[a] - s2[a];
		a++;
	}
	return (count);
}
