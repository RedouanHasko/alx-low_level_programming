#include "main.h"

/**
 * read_textfile - reads a text file,
 * and prints it to the POSIX standard output.
 * @filename: name of the file to work on.
 * @letters: the number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0.
 * if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_read, f_open, chars_counter;
	char *b_letters;

	if (filename == NULL)
	{
		return (0);
	}
	f_open = open(filename, O_RDONLY);
	if (f_open == -1)
	{
		return (0);
	}
	b_letters = malloc(sizeof(char) * letters);
	if (b_letters == NULL)
	{
		return (0);
	}
	f_read = read(f_open, b_letters, letters);
	if (f_read == -1)
	{
		free(b_letters);
		return (0);
	}
	chars_counter = write(STDOUT_FILENO, b_letters, f_read);
	if (chars_counter == -1)
	{
		free(b_letters);
		return (0);
	}
	close(f_open);
	free(b_letters);
	return (chars_counter);
}
