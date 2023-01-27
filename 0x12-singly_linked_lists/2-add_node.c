#include "lists.h"
#include <string.h>

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: a pointer to the first string.
  * @str: string of the node to be added at the beggining.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	len = strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
