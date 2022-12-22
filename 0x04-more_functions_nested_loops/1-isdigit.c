#include "main.h"

/**
  * _isdigit - checks for a digit (0 through 9).
  *
  * Return: 1 if c is a digit 0 otherwise.
  */
int _isdigit(int c)
{
	int digit;

	if (c >= '0' && c <= '9')
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}

	return (digit);
}
