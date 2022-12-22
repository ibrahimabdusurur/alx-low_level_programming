#include "main.h"

/**
  * print_line - draws a straight line in the terminal.
  * @n: the character to be checked.
  */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
