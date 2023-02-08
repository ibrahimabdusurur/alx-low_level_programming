#include "main.h"
#include <stdio.h>

/**
  * _cp - copies the content of a file to another file.
  * @file_from: the file to be copied from.
  * @file_to: the file to be copied to.
  */
void _cp(char *file_from, char *file_to)
{
	int fd1, fd2, r_sz, w_sz, cl_1, cl_2;
	char *c;

	c = malloc(1024);
	fd1 = open(file_from, O_RDWR);
	r_sz = read(fd1, c, 1024);

	if (fd1 == -1 || r_sz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	w_sz = write(fd2, c, r_sz);

	if (fd2 == -1 || w_sz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	free(c);
	cl_1 = close(fd1);

	if (cl_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}

	cl_2 = close(fd2);

	if (cl_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
}

/**
  * main - 
  * @argc: number of arguments passed to the function.
  * @argv: arguments passed to the function.
  *
  * Return: 0.
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}	
