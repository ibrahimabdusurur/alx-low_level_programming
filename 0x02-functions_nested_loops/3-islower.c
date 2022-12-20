#include "main.h"

/**
  * _islower - checks for lowercase character.
  *
  * Return: 1 if c is lowercase and 0 otherwise.
  */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
		result = 0;

	return (result);

}
