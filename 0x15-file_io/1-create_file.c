#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file.
 * @text_content: the content wil be created inside the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f_open, f_write;

	if (filename == NULL)
	{
		return (-1);
	}
	f_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (f_open == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		f_write = write(f_open, text_content, strlen(text_content));
		if (f_write == -1)
		{
			return (-1);
		}
	}
	close(f_open);
	return (1);
}
