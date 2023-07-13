#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the created file.
 * @text_content: the content of the file.
 *
 * Return: 1 if success, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRANC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		w = write(fd, text_content, _strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (1);
	}
}
