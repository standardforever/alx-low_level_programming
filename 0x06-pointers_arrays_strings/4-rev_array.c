#include "main.h"

/**
 * reverse_array - it reverse the content of an array
 * @a: the array to be reversed
 * @n: the number of element in the array
 * Return: of type void
 */
void reverse_array(int *a, int n)
{
	int i, left_val;

	left_val = 0;
	n--;
	i = 0;
	while (i < n)
	{
		left_val = a[i];
		a[i] = a[n];
		a[n] = left_val;
		i++;
		n--;
	}
}
