#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: the separator between the numbers.
  * @n: number of parameters passed to the function.
  * @...; the parameters passed to the function.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(num, int));
			break;
		}

		printf("%d%s", va_arg(num, int), separator);
	}

	va_end(num);
}
