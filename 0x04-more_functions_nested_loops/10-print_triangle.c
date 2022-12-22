#include "main.h"

/**
  * print_triangle - prints a triangle, followed by a new line.
  * @size: the character to be checked.
  */
void print_triangle(int size)
{
	int row;
	int column1;
	int column2;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column1 = size - 1; column1 > row; column1--)
			{
				_putchar(' ');
			}
			
			for (column2 = 0; column2 <= row; column2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}