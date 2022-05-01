#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	long int n1, n2, next_term;

	n1 = 1;
	n2 = 1;
	next_term = n1 + n2;
	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			printf("%li", n1);
		}
		else
		{
			printf("%li", next_term);
			n1 = n2;
			n2 = next_term;
			next_term = n1 + n2;
		}
		if (i == 50)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
