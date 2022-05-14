#include "main.h"

/**
 * leet - it  encodes string into 1337
 * @s: the string to be encoded
 * Description:
 *  Letters a and A should be replaced by 4
 *  Letters e and E should be replaced by 3
 *  Letters o and O should be replaced by 0
 *  Letters t and T should be replaced by 7
 *  Letters l and L should be replaced by 1
 * Return: a pointer of the encoded string
 */
char *leet(char *s)
{
	int i, j;

	char *cm = "aeotl";
	char *cm1 = "AEOTL";
	char num[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; cm[j] != '\0'; j++)
		{
			if (s[i] == cm[j] || s[i] == cm1[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
