#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the main code
 * @argc: the number of parameters input from terminal
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc - 1 == 0)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{

		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%i\n", add);
	return (0);
}
