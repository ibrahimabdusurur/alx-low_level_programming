#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	unsigned long fibo1_half1, fibo1_half2, fibo2_half1, fibo2_half2;
	unsigned long half1, half2;

	for (n = 0; n < 92; n++)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);

		fibo1 = fibo2;
		fibo2 = sum;
	}

	fibo1_half1 = fibo1 / 10000000000;
	fibo2_half1 = fibo2 / 10000000000;
	fibo1_half2 = fibo1 % 10000000000;
	fibo2_half2 = fibo2 % 10000000000;

	for (n = 93; n < 99; n++)
	{
		half1 = fibo1_half1 + fibo2_half1;
		half2 = fibo1_half2 + fibo2_half2;
		if (fibo1_half2 + fibo2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (n != 98)
			printf(", ");

		fibo1_half1 = fibo2_half1;
		fibo1_half2 = fibo2_half2;
		fibo2_half1 = half1;
		fibo2_half2 = half2;
	}
	printf("\n");
	return (0);
}
