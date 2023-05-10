#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: the first node of the linked list.
  * @idx: the index of the list where the new node to be added to.
  * @n: the value of the new node.
  *
  * Return: NULL if it failed,
  *	    otherwise - the address of the new node.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (;idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return NULL;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = tmp->next;
	(tmp->prev)->next = new;
	new->prev = tmp->prev;
	new->n = n;
	new->next = tmp;
	tmp->prev = new;

	return (new);
}
