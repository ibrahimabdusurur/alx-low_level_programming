#include <stdlib.h>
#include "main.h"

/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: the pointer that the memory is to be reallocated.
  * @old_size: the memory size that ptr has.
  * @new_size: the memory size that ptr to be updated to.
  *
  * Return: NULL if new_size equals to zero.
  *	    ptr if new_size equals to old_size.
  *	    pointer to the new_size memory.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	if (old_size == new_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	free(ptr);

	return (new_ptr);
}
