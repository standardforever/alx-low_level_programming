#include "main.h"
#include <stdlib.h>

/**
 * get_bit - it returns the value of a bit at a given index
 * @index: is the index starting from 0
 * @n: is the number which the index will be return
 * Return: the value of the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count, hold, i, j = 0;


	for (i = 0; n != 0 ; i++, j++)
	{
		hold = n;
		n = n >> 1;
		count = n * 2;
		count = hold - count;
		if (j == index)
			break;
	}
	if (n == 0 && j != index)
		return (-1);
	return (count);
}
