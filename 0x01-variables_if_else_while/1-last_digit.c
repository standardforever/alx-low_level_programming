#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - makes a random numbers and print conditions for the numbers
 * Return: it returns 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	/* make a random number and store it in n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* print the conditions for the random number store in n */
	if (n > 0)
		printf("%i is positve\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
