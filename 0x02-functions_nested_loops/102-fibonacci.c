#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers.
  *
  * Return: always 0 (success).
  */
int main(void)
{
	int n;
	long sum, fibo1 = 0,fibo2 = 1;

	for (n = 1; n <= 50; n++)
	{
			sum = fibo1 + fibo2;
			printf("%ld", sum);

			if (n == 50)
				continue;

			printf(", ");

			fibo1 = fibo2;
			fibo2 = sum;
	}
	printf("\n");

	return (0);
}
