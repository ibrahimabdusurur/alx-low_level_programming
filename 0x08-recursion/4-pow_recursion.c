#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y.
  * @x: the base number.
  * @y: the exponent number.
  *
  * Return: the value of x raised to the power of y.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		x = x;

	return (x = x * _pow_recursion(x, y - 1));
}
