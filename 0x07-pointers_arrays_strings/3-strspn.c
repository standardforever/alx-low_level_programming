#include "main.h"

/**
 * _strspn - it get the length of the prefix substring
 * @s: the string
 * @accept: the prefix to search for
 * Description: The  strspn()  function calculates the length (in bytes) of
 *      the initial segment of s which consists entirely of bytes in accept.
 * Return: The  strspn()  function returns the number of bytes in the initial
 *        segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, j;
	unsigned int m;

	i = 0;
	m = 0, k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				m++;
				break;
			}
			else if (accept[j + 1] == '\0')
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
	return (m);
}
