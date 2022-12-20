#include "main.h"

/**
  * _isalpha - checks for alphabetic character.
  * @c - the parameter to be checked.
  *
  * Return: 1 if c is a letter and 0 otherwise.
  */
int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);

}
