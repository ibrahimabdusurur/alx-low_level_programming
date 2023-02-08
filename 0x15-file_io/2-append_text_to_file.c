#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: the file name.
  * @text_content: the string to be added at the end of the file.
  *
  * Return: 1 on success and -1 on failure.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_sz, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (*(text_content + len))
		len++;

	fd = open(filename, O_RDWR | O_APPEND);
	w_sz = write(fd, text_content, len);

	if (fd < 0 || w_sz < 0)
		return (-1);

	close(fd);

	return (1);
}
