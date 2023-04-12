#include "main.h"
/**
 * append_text_to_file - Appends text at end of a file
 * @filename: pointer to filename
 * @text_content: content to be appended
 * Return: 1 on success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
	}

	close(fd);

	return (1);
}
