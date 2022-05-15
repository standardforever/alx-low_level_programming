#include "main.h"

/**
 * _memcpy - it copy memory area
 * Description:  The  memcpy()  function  copies  n bytes from memory area
 *	src to memory area dest.  The memory areas must not overlap.
 * @dest: the memory to add the n byte copied from src
 * @src: where the n bytes is copied from
 * @n: the number of bytes to be copied
 * Return: The memcpy() function returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
