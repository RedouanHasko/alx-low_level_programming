#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: the name of the processes file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print (in success).
 * 0 if the file is not opened or if filename is null
 * or if write fails...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(fd);
	return (rd);
}
