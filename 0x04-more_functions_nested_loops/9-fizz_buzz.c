#include <stdio.h>

/**
 * main - print number from 1-100, but for multiple of 3 print Fizz for multiple
 *        of 5 print Buzz and for multiple of both 5 and 3  print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else
			printf("%i", i);
		if (i != 100)
			printf(" ");
	}
	putchar('\n');
}
