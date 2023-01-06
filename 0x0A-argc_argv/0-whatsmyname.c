#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name, followed by a new line.
  * @argc: The number of command line arguments.
  * @argv: An array containing the program command line arguments.
  *
  * Return: 0.
  */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
