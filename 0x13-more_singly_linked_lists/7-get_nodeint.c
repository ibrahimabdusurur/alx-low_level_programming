#include "lists.h"

/**
  * get_nodeint_at_index - finds the nth node of a listint_t linked list.
  * @head: pointer which points to the first node.
  * @index: the index of the node, starting at 0.
  *
  * Return: NULL if the node does not exist,
  *	    else the nth node of a listint_t linked list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	while (head && nodes < index)
	{
		head = head->next;
		nodes++;
	}

	return (head);
}
