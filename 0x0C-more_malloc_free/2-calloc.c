#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: number of elements of the array.
  * @size: memory bytes of each element of the array.
  *
  * Return: NULL if nmemb is 0, size is 0 or malloc fails.
  *	    a pointer to the allocated memory otherwise.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
