#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memory using malloc.
  * @b: memory size to be allocated.
  *
  * Return: a pointer to the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	malloc(b);

	if (malloc(b) == NULL)
		exit(98);

	return (malloc(b));
}
