#include "main.h"
#include <stdio.h>

void _close(int fd);
void _cp(char *file_from, char *file_to);

/**
  * _close - closes fd.
  * @fd: the fd to be closed.
  */
void _close(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}

/**
  * _cp - copies the content of a file to another file.
  * @file_from: the file to be copied from.
  * @file_to: the file to be copied to.
  */
void _cp(char *file_from, char *file_to)
{
	int fd1, fd2, r_sz, w_sz;
	char *c;

	c = malloc(sizeof(char) * 1024);

	if (c == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd1 = open(file_from, O_RDONLY);
	r_sz = read(fd1, c, 1024);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r_sz > 0)
	{
		if (fd1 == -1 || r_sz == -1)
		{
			dprintf(STDERR_FILENO,
			 "Error: Can't read from file %s\n", file_from);
			free(c);
			exit(98);
		}

		w_sz = write(fd2, c, r_sz);

		if (fd2 == -1 || w_sz == -1)
		{
			dprintf(STDERR_FILENO,
				 "Error: Can't write to %s\n", file_to);
			free(c);
			exit(99);
		}

		r_sz = read(fd1, c, 1024);
		fd2 = open(file_to, O_WRONLY | O_APPEND);
	}

	free(c);
	_close(fd1);
	_close(fd2);
}

/**
  * main - copies the content of a file to another file.
  * @argc: number of arguments passed to the function.
  * @argv: arguments passed to the function.
  *
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
