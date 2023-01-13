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

	while (s2[len_s2++])
		len_s2++;

	len_s1--;
	len_s2--;

	if (((len_s1 == 0) || (len_s2 == 0)) && (n >= len_s2))
	{
		ptr = malloc(sizeof(char) * (len_s1 + len_s2));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];

		for (i = 0; i < len_s2; i++)
		{
			ptr[i] = s2[i];
			i++;
		}
	}

	if ((len_s1 != 0) && (len_s2 != 0) && (n >= len_s2))
	{
		ptr = malloc(sizeof(char) * (len_s1 + len_s2 - 1));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];

		for (i = 0; i < (len_s2 - 1); i++)
		{
			ptr[len_s1 - 1] = s2[i];
			len_s1++;
		}
	}

	if (((len_s1 == 0) || (len_s2 == 0)) && (n < len_s2))
	{
		ptr = malloc(sizeof(char) * (len_s1 + n + 1));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];

		for (i = 0; i < (n + 1); i++)
		{
			ptr[i] = s2[i];
			i++;
		}
	}

	if ((len_s1 != 0) && (len_s2 != 0) && (n < len_s2))
	{
		ptr = malloc(sizeof(char) * (len_s1 + n));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];

		for (i = 0; i < n; i++)
		{
			ptr[len_s1 - 1] = s2[i];
			len_s1++;
		}
	}

	return (ptr);
}
