#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: the string to be searched.
  * @accept: the string that contains the bytes to be searched in @s.
  *
  * Return: a pointer to the byte in s that matches one of
  *	    the bytes in accept.
  *
  *	    NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;

	}

	return ('\0');
}
