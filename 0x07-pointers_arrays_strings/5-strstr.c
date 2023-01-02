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
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			}
		}

		haystack++;
	}

	return ('\0');
}
