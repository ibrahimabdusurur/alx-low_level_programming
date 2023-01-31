#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: points to address of the first node.
  *
  * description: The function sets the head to NULL.
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);

		if (temp == NULL)
		{
			*head = NULL;
			return;
		}

		*head = temp;
	}
}
