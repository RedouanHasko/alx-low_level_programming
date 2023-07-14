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
	int fdin, fdout, nbr, nbw;
	char txt[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdin = open(argv[1], O_RDONLY);
	if (fdin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	fdout = open(argv[2], O_CREAT, O_WRONLY, O_TRUNC, 0664);
	if (fdout == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nbr = read(fdin, txt, BUFFER_SIZE)) > 0)
	{
		nbw = write(fdout, txt, nbr);
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
	cls_f(fdin);
	cls_f(fdout);
	return (0);
}

/**
 * cls_f - close the file.
 * @fd: the file descriptor.
 */
void cls_f(int FD)
{
	if (close(FD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: C'ant close fd %i\n", FD);
		exit(100);
	}
}
