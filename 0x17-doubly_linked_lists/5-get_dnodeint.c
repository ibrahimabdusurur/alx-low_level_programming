#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in a dlistint_t linked list.
 * @head: The first node of the dlistint_t list.
 * @index: index of the node, starting from 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		
		head = head->next;
	}

	return (head);
}
