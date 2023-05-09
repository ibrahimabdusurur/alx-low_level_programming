#include "lists.h"

/**
  * add_dnodeint_end - a function that adds a new node at the end of a
  *		       dlistint_t list.
  * @head: pointer to the first node.
  * @n: value of the first node.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	last = (*head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;

	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	new->n = n;
	new->next = NULL;
	new->prev = last;

	return (new);
}
