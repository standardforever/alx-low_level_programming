#include "lists.h"

/**
 * print_listint - it print all the element of a listint_t lis
 * @h: the listint_t to be printed
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
