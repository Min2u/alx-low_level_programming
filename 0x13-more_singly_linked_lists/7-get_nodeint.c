#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @head: in the linked list of first node.
 * @index: index of the node to returns.
 *
 * Return: pointer to the node to looking for, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
