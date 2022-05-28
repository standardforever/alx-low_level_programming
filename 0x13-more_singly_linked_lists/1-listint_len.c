#include "lists.h"

/**
 * listint_len - it return the number of element in listint
 * @h: the linked list to be counted
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != '\0')
			count++;
		h = h->next;
	}
	return (count);
}
