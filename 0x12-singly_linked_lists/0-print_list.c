#include "lists.h"
#include <stdio.h>

/**
  * print_list: prints all the elements of a list_t list.
  * @h: the node that the element to be printed.
  *
  * Return: the number of nodes.
  */
size_t print_list(const list_t *h)
{
	list_t *temp;
	size_t nodes = 0;

	while (h)
	{
		temp = h->next;

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = temp;
		nodes++;
	}

	return (nodes);
}
