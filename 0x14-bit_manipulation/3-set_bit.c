#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @n: the number to be modified.
  * @index: the index, starting from 0 of the bit to be set.
  *
  * Return: 1 if it worked, or -1 if an error occurred.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i <<= index;
	*n |= i;
	return (1);
}
