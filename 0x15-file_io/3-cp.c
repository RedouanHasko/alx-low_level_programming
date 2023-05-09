#include "main.h"

/**
 * closeF - close the file or return a error.
 * @_file: the file descriptor.
 */
void closeF(int _file)
{
	if (close(_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", _file);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: the counter of the number of the arguments.
 * @argv: the adress to the array of the arguments.
 *
 * Return: int num.
 */
int main(int argc, char *argv[])
{
	int inputF, outputF, nb_read, nb_write;
	char text[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputF = open(argv[1], O_RDONLY);
	if (inputF == -1)
	{
		dprintf(STDERR_FILENO, "Error: C'ant read from file %s\n",
		argv[1]);
		exit(98);
	}
	outputF = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputF == -1)
	{
		dprintf(STDERR_FILENO, "Error: C'ant write to %s\n", argv[2]);
		exit(99);
	}
	while ((nb_read = read(inputF, text, BUFFER_SIZE)) > 0)
	{
		nb_write = write(outputF, text, nb_read);
		if (nb_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: C'ant write to %s\n",
			argv[2]);
			exit(99);
		}
	}
	if (nb_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]);
		exit(98);
	}
	closeF(inputF);
	closeF(outputF);
	return (0);
}
