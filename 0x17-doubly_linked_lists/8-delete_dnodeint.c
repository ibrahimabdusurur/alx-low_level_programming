#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index index of
  *			       a dlistint_t linked list.
  * @head: the first node of the linked list.
  * @index: the index of the node that should be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);

		tmp = tmp->next;
	}

	if (tmp->prev == NULL)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		(tmp->prev)->next = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
