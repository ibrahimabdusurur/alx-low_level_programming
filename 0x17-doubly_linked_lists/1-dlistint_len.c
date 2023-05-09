#include "lists.h"

/**
  * dlistint_len - a function that finds the number of
  *		   elements in a linked dlistint_t list.
  * @h: pointer to first node of the list.
  *
  * Return: the number of elements in a linked dlistint_t list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
