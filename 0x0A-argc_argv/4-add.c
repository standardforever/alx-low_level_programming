#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - contains the main code
 * @argc: the number of parameters input from terminal
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	j = 1;
	while (j < argc)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{

			if (!(isdigit(argv[j][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
		j++;
	}
	
	printf("%i\n", add);
	return (0);
}
