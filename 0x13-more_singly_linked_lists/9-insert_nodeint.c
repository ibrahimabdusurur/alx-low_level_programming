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
	listint_t *new, *temp;
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

	temp = *head;

	while (node < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(new);
			return (NULL);
		}

		temp = temp->next;
		node++;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
