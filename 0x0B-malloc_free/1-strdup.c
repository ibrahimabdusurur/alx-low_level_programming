#include <stdlib.h>
#include "main.h"

/**
  * _strdup -  returns a pointer to a newly allocated space in memory,
  *	       which contains a copy of the string given as a parameter.
  * @str: the given string to be duplicated to a new string.
  *
  * Return: NULL if str = NULL or if if insufficient memory was available.
  *	    a pointer to the duplicated string otherwise.
  */
char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
		len++;
	}

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
