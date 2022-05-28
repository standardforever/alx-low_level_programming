#include "lists.h"

/**
<<<<<<< HEAD
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
=======
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
}
