#include <stdio.h>

/**
  * main - prints all hexadecimal numbers
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
