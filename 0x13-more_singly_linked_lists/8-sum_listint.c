#include "lists.h"

/**
 * sum_listint - To calculates the sum of all the data in a listint_t lists.
 * @head: first node in the linked lists.
 *
 * Return: the sum of result.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}