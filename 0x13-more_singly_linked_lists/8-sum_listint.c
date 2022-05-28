#include "lists.h"

/**
<<<<<<< HEAD
 * sum_listint - it returns all the sum of data(n)
 * @head: the listint_t to count the data
 * Return: data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
=======
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
<<<<<<< HEAD
=======

>>>>>>> 30ce23e94a51e8256d2e8d6ab2f34673f6c6f2a3
	return (sum);
}
