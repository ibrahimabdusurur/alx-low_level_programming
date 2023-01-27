#include "lists.h"
#include <string.h>

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: pointer to the first node.
  * @str: string of the last node.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	len = strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
