#include "main.h"

/**
 * _strlen - get the length of a given string.
 * @str: the given string.
 *
 * Return: the number of characters of the given string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the content of the file.
 *
 * Return: 1 on success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		w = write(fd, text_content, _strlen(text_content));
		if (w == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
