#include <stdio.h>

/**
 * main - print the sum of the even valued terms in fibonacci series which
 *	 values do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	long int i, n1, n2, next, sum;

	n1 = 0;
	n2 = 1;
	sum = 0;
	next = n1 + n2;
	for (i = 0; i >= 0; i++)
	{
		/* check if next is even number and */
		/* next is less than 4 million */
		if (next < 4000000 && next % 2 == 0)
			sum = sum + next;
		n1 = n2;
		n2 = next;
		next = n2 + n1;

		/* check if next is greater or equal 4 million */
		if (next >= 4000000)
			break;
	}
	printf("%li\n", sum);
	return (0);
}
