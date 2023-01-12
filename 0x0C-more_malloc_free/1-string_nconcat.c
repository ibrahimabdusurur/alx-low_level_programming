#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings.
  * @s1: the string to be copied to.
  * @s2: the string to be copied from.
  * @n: the number of characters to be copied.
  *
  * Return: NULL if the function fails.
  *
  *	    the new pointer which contains s1, followed by the first
  *	    n bytes of s2, and null terminated otherwise.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1++])
		len_s1++;

	len_s1 = len_s1 - 2;

	while (s2[len_s2++])
		len_s2++;

	/*if ((s1 == '') && (s2 == ''))
	{
		ptr = malloc(sizeof(char));

		if (ptr == NULL)
			return (NULL);

		ptr[1] = '\0';

		return (ptr);
	}

	if ((s1 == NULL || s1 == '') && (n < len_s2) &&
	   (s2 != NULL) && (s2 != ''))
	{
		ptr = malloc(sizeof(char) * (n + 1));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < n; i++)
			ptr[i] = s2[i];

		ptr[i] = '\0';
	}*/

	if (n < len_s2)
	{
		ptr = malloc(sizeof(char) * (len_s1 + n + 2));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];

		for (i = 0; i < n; i++)
		{
			ptr[len_s1] = s2[i];
			len_s1++;
		}

		ptr[len_s1] = '\0';
	}

	else if (n >= len_s2)
	{
		ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];

		for (i = 0; i < len_s2; i++)
			ptr[len_s1++] = s2[i];
	}

	return (ptr);
}
