#include "main.h"
#include <stdio.h>

/**
 * _strncpy - the function copies string from src
 * @dest: the argument that the string is copied to
 * @src: the argument that the string is copied from
 * @n: the number of char that will be copied from src to dest
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	j = j;
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
