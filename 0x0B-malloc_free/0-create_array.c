#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars, and initializes
  *		   it with a specific char.
  * @size: size of the array.
  * @c: the first character in the array.
  *
  * Return: NULL if size = 0 or if it fails.
  *	    a pointer otherwise.
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return ('\0');

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
