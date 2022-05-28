#include "lists.h"

/**
<<<<<<< HEAD
 * inser_nodeint_at_indexit - inserts a new node at a given position
 * @head: the listint_t to insert the node to
 * @idx: the index of the list where the new node should be added to
 * @n: the value to be added
 * Return: the address of the new node or NULL if failed or not possible
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	ptr = *head;
	if (n == 0)
	{
		new_node->next = ptr;
		ptr = new_node;
	}
	else
	{
		for (i = 0; i < idx -1; i++)
			ptr = ptr->next;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
=======
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
}
