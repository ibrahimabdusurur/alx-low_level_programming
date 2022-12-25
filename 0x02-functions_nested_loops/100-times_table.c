#include "main.h"

/**
  * print_times_table -  the n times table, starting with 0.
  * @n: the character that define the size of the time table.
  */
void print_times_table(int n)
{
	int row, column, m;

	if ((n >= 0) && (n <= 15))
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');

			for (column = 1; column <= n; column++)
			{
				m = row * column;
				_putchar(',');
				_putchar(' ');

				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (m > 9 && m < 100)
				{
					_putchar(' ');
					_putchar((m / 10) + '0');
				}
				else
				{
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
				}
				_putchar((m % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
