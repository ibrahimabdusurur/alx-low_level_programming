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
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
