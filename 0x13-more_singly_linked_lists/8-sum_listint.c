#include "lists.h"

/**
 * sum_listint - it returns all the sum of data(n)
 * @head: the listint_t to count the data
 * Return: data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
