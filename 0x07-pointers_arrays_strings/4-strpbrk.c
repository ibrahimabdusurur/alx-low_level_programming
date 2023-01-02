#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: the string to be searched.
  * @accept: the string that contains the characters to be searched.
  *
  * Return: a pointer to the byte in s that matches one of
  *	    the bytes in accept.
  *
  *	    NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
	int i1, i2;
	char *bytes;

	for (i2 = 0; s[i2]; i2++)
	{
		for (i1 = 0; accept[i1]; i1++)
		{
			if (s[i2] == accept[i1])
			{
				bytes = s + i2;
				break;
			}

			else
				bytes = '\0';
		}

		if (bytes == s + i2)
			break;
	}

	return (bytes);
}
