#include "main.h"

/**
 * _strcat - it concatenate two strings
 * @dest: the first string
 * @src: the second string
 * Description: it append the second string to the first sting and
 *		then add a terminating null byte.
 * Return: it returns a pointer to the string resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* finding the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
