#include "main.h"

/**
 * _atoi - it convert a string to an integer
 * @s: it string to be converted
 * Return: if no number return 0 else return the number
 */
int _atoi(char *s)
{
	int i, k, j;
	int c;

	j = 1;
	k = 0;
	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				j = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				k = 1;
				c = c * 10 + s[i] - '0';
				i++;
			}
			if (k == 1)
				break;
		}
		if (s[i] == '\0')
			return (0);
	}
	return (c * j);
}
