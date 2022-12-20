#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from n to 98.
  * @n: the parameter to be checked.
  */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
		printf("98");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		printf("98");
	}
	printf("\n");
}
