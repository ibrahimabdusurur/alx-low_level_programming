#include <stdio.h>

/**
  * main - finds and prints the first 98 Fibonacci numbers,
 	   starting with 1 and 2, followed by a new line.
  *
  * Return: always 0 (success).
  */
int main(void)
{
	int n;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (n = 1; n <= 98; n++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		if (n == 98)
			continue;

		printf(", ");
		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("\n");

	return (0);
}
