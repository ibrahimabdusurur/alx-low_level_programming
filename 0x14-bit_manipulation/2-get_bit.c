#include "main.h"

/**
  * get_bit - finds value of a bit at a given index.
  * @n: the number that a value of a bit to be found.
  * @index: the index, starting from 0 of the bit to be found.
  *
  * Return: the value of the bit at index index or
  *	    -1 if an error occured.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;
	return (n & 1);
}
