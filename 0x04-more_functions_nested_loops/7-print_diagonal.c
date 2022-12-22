#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  */
void print_diagonal(int n)
{
	int row;
	int column;

	if (n > 0)
	{
		for(row = 0; row < n; row++)
		{
			for(column = 0; column < row; column++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
