#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: points to address of the first node.
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
/*		free(head->n);*/
		free(head);
		head = temp;
	}
}
