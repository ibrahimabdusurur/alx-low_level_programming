#include "main.h"

/**
  * _memset -  fills memory with a constant byte.
  * @s: the pointer to the memory area to be filled with constant.
  * @b: the constant that fills the memory area pointed by @s.
  * @n: the number of areas to be filled with @b.
  *
  * Return: the value of @s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *memory = s;

	for (i = 0; i < n; i++)
		memory[i] = b;

	return (memory);
}
