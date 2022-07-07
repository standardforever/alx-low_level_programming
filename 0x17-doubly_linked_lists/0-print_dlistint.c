#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - it print all the element of a double linked list
 * @h: pointer to the head
 * Return: the total number of node of the dlinked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (h->prev != NULL)
	{
		temp = h->prev;
		while (temp)
		{
			printf("%i\n", temp->n);
			temp = temp->prev;
			count += 1;
		}
	}

	if (h->next != NULL)
	{
		temp = h;
		while (temp)
		{
			printf("%i\n", temp->n);
			temp = temp->next;
			count += 1;
		}
	}
	return (count);
}
