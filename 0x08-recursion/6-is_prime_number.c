#include "main.h"

/**
 * prime - check for the prime number
 * @a: the prime number
 * @b: the number of power
 * Return: 1 if is a prime else 0
 */

int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	return (prime(a, b + 1));
}
/**
 * is_prime_number - it returns 1 if the input nuber is a prime
 * @n: the number to check
 * Return: 1 if a prime number esle 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
