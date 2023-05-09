#include "main.h"

void check_file(int file_from, int file_to, char *argv[]);
int main(int argc, char *argv[]);

/**
 * check_file - checks that files can be opened
 * @file_from: the file copying from
 * @file_to: the file copying to
 * @argv: vector that contains the command line arguments
 */
void check_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: arguments
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, f_close;
	char buffer[1024];
	ssize_t number_char, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(file_from, file_to, argv);

	for (number_char = 1024; number_char == 1024;)
	{
		number_char = read(file_from, buffer, 1024);
		if (number_char == -1)
			check_file(-1, 0, argv);
		w = write(file_to, buffer, number_char);
		if (w == -1)
			check_file(0, -1, argv);
	}

	f_close = close(file_from);
	if (f_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	f_close = close(file_to);
	if (f_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
