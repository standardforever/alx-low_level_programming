#include "main.h"


/**
 * sqrt - find the square root
 * @a: the integer to finded the square root
 * @b: the number of power
 * Return: 0
 */

int sqrt_(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt_(a, b + 1));
}
/**
 * _sqrt_recursion - it returns the natural square of a number
 * @n: the integer to calculate the natural square
 * Return: if it has no natural square return -1 else return natural square
 */

int _sqrt_recursion(int n)
{
	return (sqrt_(n, 0));
}