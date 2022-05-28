#include "lists.h"

/**
<<<<<<< HEAD
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
=======
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
	return (head);
}
