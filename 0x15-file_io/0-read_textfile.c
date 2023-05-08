#include "main.h"

/**
 * read_textfile - reads a text file, prints it to the POSIX STDOUT
 * @filename: text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 if filename is NULL or file can't be opened or read
 * or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) *letters);
	ssize_t fd = open(filename, O_RDONLY);
	ssize_t text_read = read(fd, buffer, letters);
	ssize_t bytes_write = write(STDOUT_FILENO, buffer, text_read);

	if (fd == -1)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_write);
}

