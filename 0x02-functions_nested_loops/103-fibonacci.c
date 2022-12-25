#include <stdio.h>

/**
  * main - finds and prints the sum of the even-valued terms of
  *	   fibonacci series, followed by a new line.
  *
  * Return: always 0 (success).
  */
int main(void)
{
	int n;
	long fibo1 = 0, fibo2 = 1, sum1, sum2 = 0;

	for (n = 1; n < 50; n++)
	{
		sum1 = fibo1 + fibo2;

		if (sum1 > 4000000)
			break;

		if ((sum1 % 2) == 0)
			sum2 = sum2 + sum1;

		fibo1 = fibo2;
		fibo2 = sum1;
	}
	printf("%ld\n", sum2);

	return (0);
}
