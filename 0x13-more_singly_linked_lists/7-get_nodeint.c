#include "lists.h"

/**
 * get_nodeint_at_index - it returns the nth node of a listint_t linked list
 * @head: the head node of the linked list
 * @index: the index t return
 * Return: nth node of a listint_t or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0)
		return (head);

	while (count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
