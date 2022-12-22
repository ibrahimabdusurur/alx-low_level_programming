#include "stdio.h"

/**
  * main - finds and prints the largest prime factor of 
  *        the number 612852475143, followed by a new line.
  *
  * Return: 0
  */
int main(void)
{
	long n = 612852475143;
	int m;

	while (m <= (n / 2))
	{
		if ((n % 2) == 0)
		{
			n = n / 2;
			continue;
		}

		for (m = 3; m <= (n / 2); m++)
		{
			if ((n % m) == 0)
			{
				n = n / m;
				m = 3;
			}
		}
	}

	printf("%ld\n", n);

	return (0);
}
