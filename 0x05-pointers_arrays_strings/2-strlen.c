#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string that the length to be gotten.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
