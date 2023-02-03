#include "main.h"

/**
  * flip_bits - finds the number of bits that would be needed to
  *		be flipped to get from one number to another.
  * @n: the first number.
  * @m: the second number.
  *
  * Return: the number of bits that would be needed to flipped.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int bits = 0;

	xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
