#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: pointer to file
 * @letters: number of letter to be read and printed
 * Return: Number of letters that have been read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readANDprint;

	char *words = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	read(fd, words, (letters));

	words[letters + 1] = '\0';

	readANDprint = strlen(words);

	close(fd);

	write(STDOUT_FILENO, words, readANDprint);

	return (readANDprint);
}
