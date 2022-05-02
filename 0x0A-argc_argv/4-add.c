#include <stdio.h>
#include <stdlib.h>
/**
 * main - it adds positve numbers
 * @argc: contains the count of the input
 * @argv: contains the input atgument
 * Return: 0
 */

char _isalpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return("NULL");
}
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i <= argc; i++)
	{
		if (_isalpha(argv[i] == "NULL")
			printf("%s\n", "Error");
	}
	if (argc > 1)
	{
		j = 0;
		for (i = 1; i < argc; i++)
		{
			j += atoi(argv[i]);
		}
		printf("%i\n", j);
	}
	return (0);
}
