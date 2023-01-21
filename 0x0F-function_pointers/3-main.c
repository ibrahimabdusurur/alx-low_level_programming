#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - performs simple operations from command line arguments
  *	   and prints the result, followed by a new line.
  * @argc: The number of command line arguments.
  * @argv: An array containing the program command line arguments.
  *
  * Return: 0.
  */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int calc, num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0' || get_op_func(operator) == NULL || *operator == '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = (*get_op_func(operator))(num1, num2);

	printf("%d\n", calc);

	return (0);
}
