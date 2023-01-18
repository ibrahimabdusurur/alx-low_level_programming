#include "function_pointers.h"

/**
  * print_name - prints a name.
  * @name: the name to be printed.
  * @f: the function that points to a function that prints the name.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
