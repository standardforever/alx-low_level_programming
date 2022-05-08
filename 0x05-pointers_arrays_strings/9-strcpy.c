#include "main.h"

/**
 * _strcpy - it copies the string pointed to by src
 * @dest: the location specify to copy the string to
 * @src: the string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
