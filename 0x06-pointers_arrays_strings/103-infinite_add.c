#include "main.h"
/**
 * infinite_add - it adds two numbers
 * @r:  is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * @n1: the first number which is a string of number
 * @n2: the second number which is a string of number
 * Return: a pointer to the result,
 *         If the result can not be stored in r the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{int cunt1, cunt2, dig1, dig2, add = 0, big, op;

	/* fing the lenth of the two string */
	for (cunt1 = 0; n1[cunt1] != '\0'; cunt1++)
		;
	for (cunt2 = 0; n2[cunt2] != '\0'; cunt2++)
		;
	if (cunt2 >= cunt1)
		big = cunt2;
	else
		big = cunt1;
	/* checking if the result can be store in r */
	if (size_r <= big + 1)
		return (0);
	r[big + 1] = '\0', cunt1--, cunt2--, size_r--;
	dig1 = n1[cunt1] - 48, dig2 = n2[cunt2] - 48;
	while (big >= 0)
	{
		op = dig1 + dig2 + add;
		if (op > 9)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			r[big] = (op % 10) + 48;
		else
			r[big] = '0';
		if (cunt1 > 0)
			cunt1--, dig1 = n1[cunt1] - 48;
		else
			dig1 = 0;
		if (cunt2 > 0)
			cunt2--, dig2 = n2[cunt1] - 48;
		else
			dig2 = 0;
		big--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
