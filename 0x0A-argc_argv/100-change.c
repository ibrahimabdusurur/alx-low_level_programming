#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the minimum number of coins to
  *	  make change for an amount of money.
  * @argc: The number of arguments supplied to the program.
  * @argv: An array of pointers to the arguments.
  *
  * Return: If the number of arguments is not exactly one - 1.
  *	    Otherwise - 0.
  */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	cents = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents > 0)
	{
		coins = ((((cents / 25) + ((cents % 25) / 10) +
			 (((cents % 25) % 10) / 5)) +
			 ((((cents % 25) % 10) % 5) / 2)) +
			 ((((cents % 25) % 10) % 5) % 2));

	}

	printf("%d\n", coins);
	return (0);
}
