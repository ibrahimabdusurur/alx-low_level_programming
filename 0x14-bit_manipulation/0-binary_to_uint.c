#include "main.h"
#include <stddef.h>

unsigned int exp_calc(int exponent);
unsigned int binary_to_uint(const char *b);

/**
  * exp_calc - calculates exponential value for base 2.
  * @exponent: exponent.
  *
  * Return: result.
  */
unsigned int exp_calc(int exponent)
{
	unsigned int result = 1;
	int i;

	if (exponent == 0)
		return (1);

	for (i = 0; i < exponent; i++)
		result *= 2;

	return (result);
}

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: pointing to a string of 0 and 1 chars.
  *
  * Return: 0 if there is one or more chars in
  *	    the string b that is not 0 or 1,
  *	    or if b is NULL,
  *
  *	    else the converted number.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, digit, exp_res;
	int i = 0, exponent = 0;

	if (b == NULL)
		return (0);

	for (i = 0; *(b + i); i++)
		if ((*(b + i) - '0') != 0 && (*(b + i) - '0') != 1)
			return (0);

	i--;

	for (; i >= 0; i--)
	{
		exp_res = exp_calc(exponent++);
		digit = (*(b + i) - '0') * exp_res;
		dec += digit;
	}

	return (dec);
}
