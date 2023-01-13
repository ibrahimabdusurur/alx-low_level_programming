#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings.
  * @s1: the string to be copied to.
  * @s2: the string to be copied from.
  * @n: the number of characters to be copied.
  *
  * Return: If the function fails NULL.
  *
  *	    otherwise a pointer which contains s1, followed by
  *	    the first n bytes of s2, and null terminated.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		ptr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[len++] = s2[i];

	ptr[len] = '\0';

	return (ptr);
}
