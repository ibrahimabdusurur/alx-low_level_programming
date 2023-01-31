#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @idx: the index of the list where the new node should be added.
  * @n: the value of the new node.
  *
  * Return: the address of the new node, or NULL if it failed.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp1;
	listint_t *temp2;
	unsigned int node = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	temp2 = *head;

	while (*head && node < idx)
	{
		temp1 = *head;
		*head = (*head)->next;
		node++;
	}

	if (node < idx)
	{
		*head = temp2;
		return (NULL);
	}

	new->n = n;
	temp1->next = new;
	new->next = *head;
	*head = temp2;

	return (new);
}
