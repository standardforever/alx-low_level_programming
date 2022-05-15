#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - it compares two strings
 * @s1: the first string
 * @s2: the second string to be compare
 * Description: it compares two strings
 * Return: returns an integer less than, equal to, or greater than
 *	   zero if s1 is found, respectively, to be less than, to
 *	   match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	return (s1[i] - s2[i]);
}
