#include "lists.h"

/**
  * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list.
  * @head: pointer to the first node.
  * @index: the index of the node, starting from 0.
  *
  * Return: NULL - if the node does not exist,
  *	    otherwise - the nth node of a dlistint_t linked list.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (;index != 0; index--)
	{
		if (head == NULL)
			return NULL;

		head = head->next;
	}

	return (head);
}
