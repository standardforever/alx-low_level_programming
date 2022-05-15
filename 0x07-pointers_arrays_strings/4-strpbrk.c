#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 *              in the string accept
 * @s: the string to searche from
 * @accept: the second string to compare with
 * Description:  The strpbrk() function locates the first occurrence  in  the
 *           string s of any of the bytes in the string accept.
 * Return: Returns a pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k, j;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				k = 1;
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}
	return (&s[i]);
}
