#include <stdio.h>

/**
  * main - prints every possible combination of single digits
  * Return - 0
  */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
