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

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(num, int), separator);

	printf("%d\n", va_arg(num, int));
	va_end(num);
}
