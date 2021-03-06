#include "main.h"

/**
 * _strncat - it concatenate two strings
 * @dest: the first string
 * @src: the second string
 * @n: the byte of the string to be copied from src
 * Description: it copies n byte of data from src and concate it with dest
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* find the lenght of dest */
	i = 0;
	while (dest[i] != '\0')
		i++;

	/* concatenate the n string */
	j = 0;
	while (src[j] != src[n])
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
