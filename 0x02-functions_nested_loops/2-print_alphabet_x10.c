#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by new line.
 * You can only use _putchar twice in your code
 * Return: Nothing(type void)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	/* print from 1-10 */
	while (i <= 9)
	{
		/*print the alphabet */
		for (c = 97; c <= 122; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
