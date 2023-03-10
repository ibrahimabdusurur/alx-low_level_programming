#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of
  *			      a listint_t linked list.
  * @head: a pointer that points to the first node.
  * @index: the index of the node that should be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int node = 0;

	if (*head == NULL)
		return (-1);

	temp1 = *head;

	if (index == 0)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
		return (1);
	}

	while (node < index - 1)
	{
		temp1 = temp1->next;

		if (temp1->next == NULL)
			return (-1);

		node++;
	}

	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return (1);
}
