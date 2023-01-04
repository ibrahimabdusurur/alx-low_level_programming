#include "main.h"

/**
  * prime - return 1 if n is prime number or 0 otherwise.
  * @n: the given number.
  * @div: the number that divides n.
  * 
  * Return: 1 if n is a prime number.
  *	    0 otherwise.
  */
int prime(int n, int div)
{
	if ((div * (n / div)) == n)
		return (0);

	if (div == n / 2)
		return (1);

	return (prime(n, div + 1));
}

/**
  * is_prime_number - checks if a given number is prime number.
  * @n: the given number.
  *
  * Return: 1 if n is a prime number.
  *	    0 otherwise.
  */
int is_prime_number(int n)
{
	int div = 2;

	if (n < 0)
		n = n * -1;

	if ((n == 0) || (n == 1))
		return (0);

	if ((n == 2) || (n == 3))
		return (1);

	return (prime(n, div));
}
