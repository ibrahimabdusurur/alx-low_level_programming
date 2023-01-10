#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatenates two strings.
  * @s1: the string to be catenated.
  * @s2: the string to be copied.
  *
  * Return: NULL on failure.
  *	    s1 on success.
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	len = i;

	for (i = 0; s2[i]; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';
	return (concat);
}
