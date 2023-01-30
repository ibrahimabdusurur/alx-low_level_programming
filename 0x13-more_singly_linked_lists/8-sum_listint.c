#include "lists.h"

/**
  * sum_listint - finds the sum of all the data (n) of
  *		  a listint_t linked list.
  * @head: a pointer that points to the first node.
  * Return: 0 if the list is empty,
  *	    else the sum.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
