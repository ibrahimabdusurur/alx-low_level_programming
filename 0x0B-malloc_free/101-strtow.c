#include <stdlib.h>
#include "main.h"

int word_len(char *str);
char **strtow(char *str);

/**
  * word_len - finds length of word from given string.
  * @str: the string that length of words to be found.
  *
  * Return: length of the word.
  */
int word_len(char *str)
{
	int index = 0, len = 0;

	while ((str[index]) && (str[index] != ' '))
	{
		index++;
		len++;
	}

	return (len);
}

/**
  * strtow - splits a string into words.
  * @str: the string to be splitted in to words.
  *
  * Return: NULL if str == NULL or str == "".
  *	    NULL if the function fails.
  *	    a pointer to an array of strings (words) otherwise.
  */
char **strtow(char *str)
{
	char **ptr;
	int index = 0, i = 0, j, letters, words = 0, len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (; str[index]; index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (str[index] != ' ')
		{
			index += word_len(str + index);
			words++;
		}
	}

	ptr = malloc(sizeof(char *) * (words + 1));

	if (ptr == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < (words); i++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		ptr[i] = malloc(sizeof(char) * (letters + 1));

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);

			free(ptr);
			return (NULL);
		}

		for (j = 0; j < letters; j++)
			ptr[i][j] = str[index++];

		ptr[i][j] = '\0';
	}

	ptr[i] = '\0';

	return (ptr);
}
