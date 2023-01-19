#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings, followed by a new line.
  * @separator: the separator between strings.
  * @n: total number of parameters passed to the function..
  * @...: parameters passed to the function.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *tmp;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(str, char *);

		if (tmp == NULL)
			tmp = "(nil)";

		printf("%s", tmp);

		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
