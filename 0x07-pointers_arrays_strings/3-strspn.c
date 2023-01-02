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
	int i1, i2;
	unsigned int ret = 0;

	for (i2 = 0; accept[i2]; i2++)
	{
		for (i1 = 0; s[i1]; i1++)
		{
			if (s[i1] == accept[i2])
			{
				ret++;
				break;
			}
		}
	}
	ret++;

	return (ret);
}

