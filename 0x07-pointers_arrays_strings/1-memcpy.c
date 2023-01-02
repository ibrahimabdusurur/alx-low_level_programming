#include "main.h"

/**
  * _memcpy - copies memory area.
  * @dest: the memory area that the address copied to
  * @src: the pointer that points to memory area to be copied.
  * @n: the number of memory addressed to be copied.
  *
  * Return: the value of @dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *memory1 = src, *memory2 = dest;

	for (i = 0; i < n; i++)
		memory2[i] = memory1[i];

	return (memory2);
}
