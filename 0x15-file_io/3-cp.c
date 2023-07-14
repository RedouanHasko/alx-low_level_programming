#include "main.h"

/**
 * main - the entry point.
 * program that copies the content of a file to another file.
 * @argc: the arguments counter.
 * @argv: the array of the arguments.
 *
 * Return: a number.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, nbr, nbw;
	char txt[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT, O_WRONLY, O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nbr = read(file_from, txt, BUFFER_SIZE)) > 0)
	{
		nbw = write(file_to, txt, nbr);
		if (nbw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			exit(99);
		}
	}
	if (nbr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	cls_f(file_from);
	cls_f(file_to);
	return (0);
}

/**
 * cls_f - close the file.
 * @FD: the file descriptor.
 */
void cls_f(int FD)
{
	if (close(FD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: C'ant close fd %i\n", FD);
		exit(100);
	}
}
