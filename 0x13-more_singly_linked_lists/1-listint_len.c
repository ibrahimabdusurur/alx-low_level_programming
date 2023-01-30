#include "lists.h"

/**
  * listint_len - finds the number of elements in listint_t list.
  * @h: the node that the element to be counted.
  *
  * Return: the number of elements in a linked listint_t list.
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
