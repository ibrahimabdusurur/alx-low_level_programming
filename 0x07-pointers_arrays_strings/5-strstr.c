#include "main.h"

/**
  * _strstr - locates a substring.
  * @needle: the string to be searched in @haystack.
  * @haystack: the string to be searched.
  *
  * Return: a pointer to the beginning of the located substring.
  *	    NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == *needle + i)
				return (needle);
		}

		haystack++;
	}

	return ('\0');
}
