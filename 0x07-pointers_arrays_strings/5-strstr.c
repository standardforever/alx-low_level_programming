#include "main.h"

/**
 * _strstr - it locate a substring
 * @haystack: the string to search
 * @needle: the second string to search for the first occurrence
 * Description: The _strstr() function finds the first occurrence of the
 *              substring needle in the string haystack. The terminating
 *              null bytes (\0) are not compared
 * Return: Returns a pointer to the beginning of the located substring,
 *          or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
				return (&haystack[j]);
		}
	}
	return ('\0');
}
