#include "main.h"

/**
  * print_sign - prints the sign of a number.
  * @n: the parameter to be checked
  *
  * Return: 1 if n is greater than zero, 0 if n is zero
  *         and -1 if n is less than zero.
  */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = -1;
	}

	return (result);
}
