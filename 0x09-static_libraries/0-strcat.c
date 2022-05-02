#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: argument src append to dest string
 * @src: the string that append to dest
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	/* store length of dest in the length variable*/
	length = 0;
	while (dest[length] != '\0')
		++length;

	/* concatenate src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++length)
		dest[length] = src[j];

	/* terminating the s1 string*/
	dest[length] = '\0';


	return (dest);
}
