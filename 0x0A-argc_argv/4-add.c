#include <stdio.h>
#include <stdlib.h>
/**
 * main - it adds positve numbers
 * @argc: contains the count of the input
 * @argv: contains the input atgument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc > 0)
	{
		j = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0 && (atoi(argv[i]) <= 9))
			{
				j += atoi(argv[i]);
			}
			else
			{
				j = 0;
				break;
			}
		}
	}
	else
		printf("0\n");
	if (j == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (j > 0)
		printf("%i\n", j);
	return (0);
}
