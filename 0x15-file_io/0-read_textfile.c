#include "main.h"

/**
  * read_textfile - reads a text file and prints it
  *		    to the POSIX standard output.
  * @filename: the file name.
  * @letters: the number of letters it should read and print.
  *
  * Return: 0 if filename is NULL or
  *	    if write fails or does not write the expected amount of bytes or
  *	    if the file can not be opened or read,
  *
  *	    else the actual number of letters it could read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r_sz, w_sz;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r_sz = read(fd, c, letters);
	w_sz = write(STDOUT_FILENO, c, letters);

	if (fd < 0 || r_sz < 0 || w_sz != r_sz)
	{
		free(c);
		return (0);
	}

	free(c);
	close(fd);

	return (w_sz);
}
