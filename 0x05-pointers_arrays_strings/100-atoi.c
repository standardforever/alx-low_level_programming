#include "main.h"
#include <stdio.h>
/**
 * _atoi - it convert a string to an integer
 * @s: it string to be converted
 * Return: if no number return 0 else return the number
 */
void _atoi(char *s)
{
	int i, k;
	int c = 0;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			printf("%c", s[i]);
		/*	k++;
			for (i = i; s[i] != '\0'; i++)
			{
				if (s[i] >= '0' && s[i] <= '0')
				{
					/c += s[i];/
					k++;
				}
				else
					break;
			}*/
		}
		if (k > 0)
			break;
	}printf("%c", s[i]);
	//return (c);
}
int main(void)
{
	_atoi("98");
}