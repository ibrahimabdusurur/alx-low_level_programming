#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int r, c;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (c = 0; c < r; c++)
				_putchar(' ');
			_putchar('\\');

			if (r == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
