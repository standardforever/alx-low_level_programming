#include "lists.h"

/**
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
}
