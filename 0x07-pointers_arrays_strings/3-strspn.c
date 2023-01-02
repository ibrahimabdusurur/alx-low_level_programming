#include "main.h"

/**
  * strspn - gets the length of a prefix substring.
  * @s: the string that the characters to be checked from.
  * @accept: the substring to be checked.
  *
  * Return: the number of bytes in the initial segment of 
  *	    @s which consist only of bytes from accept.
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int ret = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				ret++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (ret);
		}

		s++;
	}

	return (ret);
}
