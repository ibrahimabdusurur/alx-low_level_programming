#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - adds all its parameters.
  * @n: the number of parameters passed to the function.
  * @...: the parameters passed.
  *
  * Return: 0 if n == 0
  *	    otherwise the sum of all its parameters.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
