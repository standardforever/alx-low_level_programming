#include "main.h"

/**
 * _abs - it computes the absolute value of an integer
 * @a: the input integer
 * Return: it return an int of the absolute integer
 */
int _abs(int a)
{
	/* check if a is less than 0r equal to -1*/
	/* if yes than multiple it by -1 and store it in a*/
	/* then return the stored value in a */
	/* if is not a negative number then return a*/
	if (a <= -1)
	{
		a *= -1;
	}
	return (a);
}
