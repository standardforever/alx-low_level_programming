#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program multiples two integers
 * @argc: contains the number of argument enter
 * @argv: contains the list of the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc <= 1)
		printf("%s\n", "Error");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%i\n", i *= j);
	}
	return (0);
}