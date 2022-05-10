#include "main.h"


/**
 * _strncpy - it copies a string
 * @dest: the first string
 * @src: the second string
 * @n: the number of byte of src to copy
 * Return: a pointer to the copied dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
