#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - it generate random valid passwords for the program 101-crackme
 * Return: nothing
 */
int main(void)
{
	int i, sum, j;
	int n[100];

	srand(time(0));
	for (i = 0; i < 100; i++)
	{
		n[i] = rand() % 78;
		putchar(n[i] + '0');
		sum += (n[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
