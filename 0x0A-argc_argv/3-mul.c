#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers.
  * @argc: The number of command line arguments.
  * @argv: An array containing the program command line arguments.
  *
  * Return: 0 if the value of argc is 3.
  *	    1 if the value of argc is other than 3..
  */
int main(int argc, char *argv[])
{
	int sum = 1, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
			sum *= atoi(argv[i]);

		printf("%d\n", sum);
	}

	return (0);
}
