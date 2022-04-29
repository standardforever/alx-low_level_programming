#include <stdio.h>

/**
 * main - prints all the number of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char i;

	/* print numbers for 0-9*/
	for (i = 48; i <= 57; i++)
		putchar(i);

	/*print alphabet from a-f */
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
