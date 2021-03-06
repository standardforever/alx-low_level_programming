#include "3-calc.h"

/**
 * main - where all functions are executed
 * Description: mini calculator
 * @argc: the total number of argument from the terminal
 * @argv: an array where the input parameters are store
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]), num2 = atoi(argv[3]), c = argv[2];

	if (get_op_func(c) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((get_op_func("/") && num2 == 0) || (get_op_func("%") && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(num1, num2));
	return (0);
}
