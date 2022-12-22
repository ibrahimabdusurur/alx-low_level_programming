#include "main.h"

/**
  * _isupper - checks for uppercase character.
  *
  * Return: 1 if c is uppercase 0 otherwise.
  */
int _isupper(int c)
{
	int upper;

	if (c >= 'A' && c <= 'Z')
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}

	return (upper);
}
