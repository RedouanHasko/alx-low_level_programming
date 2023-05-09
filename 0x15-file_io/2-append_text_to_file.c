#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_write;

	if (filename == NULL)
	{
		return (-1);
	}
	f_open = open(filename, O_RDWR | O_APPEND);
	if (f_open == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
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
