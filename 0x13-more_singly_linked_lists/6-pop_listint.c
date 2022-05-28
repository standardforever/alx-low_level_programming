#include "lists.h"

/**
<<<<<<< HEAD
 * pop_listint - it delete the head node of a listint_t linked list and
 *		returns the head node's data(n)
 * @head: the linked list to perform the operation on
 * Return: 0 if the linked is empty else the head node's of data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	temp = *head;
	if (*head == NULL || temp->next == NULL)
		return (0);
	val = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (val);	
=======
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
}
