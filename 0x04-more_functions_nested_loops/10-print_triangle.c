#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = size - r; c > 0; c--)
				_putchar(' ');

			for (c = 0; c < r; c++)
				_putchar('#');

			if (r == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
