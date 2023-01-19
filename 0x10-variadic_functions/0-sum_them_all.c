#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - adds all its parameters.
  * @n: the number of arguments.
  *
  * Return: the sum of all its parameters.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list ptr;
	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, unsigned int);

	va_end(ptr);
	return (sum);
}
