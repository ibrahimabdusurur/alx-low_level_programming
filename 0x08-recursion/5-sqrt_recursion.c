#include "main.h"

/**
  * _sqrt - return square root.
  * @n: the number that the square root to be found.
  * @sqrt: the square root.
  *
  * Return: the square root of n.
  */
int _sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);

	else if (sqrt == n / 2)
		return (-1);

	return (_sqrt(n, sqrt + 1));
}


/**
  * _sqrt_recursion - the natural square root of a number.
  * @n: the number that the square root to be found.
  *
  * Return: the square root of the number.
  */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);

	else if (n == 1)
		return (1);

	return (_sqrt(n, sqrt));
}
