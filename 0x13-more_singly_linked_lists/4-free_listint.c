#include "lists.h"

/**
<<<<<<< HEAD
 * free_listint - the function free listint_t
 * @head: the list to be free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free((&current->n));
		free(current);
=======
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
	}
}
