#include <stdio.h>

/**
 * main - it compute and print all the multiple of 3 or 5
 * Return: 0
 */
int main(void)
{
	int i, j;

	j = 0;
	for (i = 0; i <= 1023; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}
	}
	printf("%i", j);
	putchar('\n');
	return (0);

}
