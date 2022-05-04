#include <stdio.h>

/**
 * main - it print the largest prime factor
 * Return: 0
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 3; i < 12057; i += 2)
	{
		while ( n % i == 0 && n != i)
			n /= i;
	}
	printf("%li\n", n);
	return (0);
}
