#include "3-calc.h"

/**
  * op_add - adds to integer passed to the function.
  * @a: the first integer.
  * @b: the second integer.
  *
  * Return: the sum of the integers.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract an integer passed to the function from another.
  * @a: the first integer.
  * @b: the second integer.
  *
  * Return: the difference of the integers.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies to integer passed to the function.
  * @a: the first integer.
  * @b: the second integer.
  *
  * Return: the product of the integers.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_add - divides an integer passed to the function by another.
  * @a: the first integer.
  * @b: the second integer.
  *
  * Return: the division of the integers.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - finds remainder of division of integers
  *	     passed to the function.
  * @a: the first integer.
  * @b: the second integer.
  *
  * Return: the remainder of the division of the integers.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
