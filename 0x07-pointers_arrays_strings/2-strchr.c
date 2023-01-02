#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @s: the string that a character to be located.
  * @c: the character to be located.
  *
  * Return: a pointer to the first occurrence of the character c.
  *	    NULL if the character is not found.
  */
char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			ret = s + i;
			break;
		}
		else if (!(s[i] == c))
		{
			ret = '\0';
		}
	}

	return (ret);
}
