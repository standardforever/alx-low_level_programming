#include <stdio.h>

/**
 * main - contains the main code
 * @argc: the number of parameters input from terminal
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%i\n", argc - 1);
	return (0);
}
