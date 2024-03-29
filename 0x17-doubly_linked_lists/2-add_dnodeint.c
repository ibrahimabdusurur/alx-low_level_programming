#include "lists.h"

/**
  * add_dnodeint - a function that adds a new node at the beginning of a
  *		   dlistint_t list.
  * @head: the pointer to the first node.
  * @n: value of the new node.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = (*head);
	new->n = n;
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	*head = new;

	return (*head);
}
