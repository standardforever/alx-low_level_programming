#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - takes a random number store it in n a print condition for it
 * Return: 0
 */
int main(void)
{
	int n;

	/* generate a random number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/* print condition for the generated random number */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
