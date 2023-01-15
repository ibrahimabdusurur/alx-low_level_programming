#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers.
  * @min: the minimum value of the integers.
  * @max: the maximum value of the integers.
  *
  * Return: NULL if min > max or malloc fails.
  *	    the pointer to the newly created array.
  */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; max >= min; i++)
		ptr[i] = min++;

	return (ptr);
}
