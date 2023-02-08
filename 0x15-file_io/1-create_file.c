#include "main.h"

/**
  * _strlen - finds length of string passed to the function.
  * @c: the string passed to the function.
  *
  * Return: length of the string.
  */
int _strlen(char *c)
{
	ssize_t len = 0;

	while (*(c + len))
		len++;

	return (len);
}

/**
  * create_file - creates a file.
  * @filename: the name of the file to create.
  * @text_content: a NULL terminated string to write to the file.
  *
  * Return: 1 on success, -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w_sz, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_sz = write(fd, text_content, len);

	if (fd < 0 || w_sz < 0)
		return (-1);

	close(fd);

	return (1);
}
