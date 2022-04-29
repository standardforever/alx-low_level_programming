#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - makes a random numbers and print conditions for the last digit
 * Return: it returns 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, y;

	/* make a random number and store it in n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* print the conditions for the random number store in n */
	y = n % 10;
	if (y > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, y);
	else if (y == 0)
		printf("Last digit of %i is %i and is 0\n", n, y);
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %i is ", n);
		printf("%i and is less than 6 and not 0\n", y);
	}
	return (0);
}
