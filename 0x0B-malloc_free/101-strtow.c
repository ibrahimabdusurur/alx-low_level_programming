#include <stdlib.h>
#include "main.h"

/**
  * strtow - splits a string into words.
  * @str: the string to be splitted in to words.
  *
  * Return: NULL if str == NULL or str == "".
  *	    NULL If the function fails.
  *	    a pointer to an array of strings (words) otherwise.
  */
char **strtow(char *str)
{
	char **ptr;
	int index, i = 0, j, len, words = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		while (str[index] == ' ')
			index++;

		if ((str[index] != ' ') && (str[index] != '\0'))
		{
			while ((str[index] != ' ') && (str[index] != '\0'))
				index++;

			words++;
		}

		if (str[index] == '\0')
			words++;
	}

	ptr = malloc(sizeof(char *) * (words));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		while (str[index] == ' ')
			index++;

		len = 0;

		if ((str[index] != ' ') && (str[index] != '\0'))
		{
			while (str[index] != ' ')
			{
				index++;
				len++;
			}

			ptr[i] = malloc(sizeof(char) * (len + 1));

			if (ptr[i] == NULL)
				return (NULL);

			i++;
		}
	}

	/*ptr[i] = malloc(sizeof(char) * 1);

	if (ptr[i] == NULL)
		return (NULL);*/

	i = 0;

	for (index = 0; str[index]; index++)
	{
		while (str[index] == ' ')
			index++;

		if ((str[index] != ' ') /*&& (str[index] != '\0')*/)
		{
			for (j = 0; str[index] != ' '; j++)
				ptr[i][j] = str[index++];

			ptr[i][j] = '\0';
			i++;
		}
	}

	/*ptr[i][0] = '\0';*/

	return (ptr);
}
