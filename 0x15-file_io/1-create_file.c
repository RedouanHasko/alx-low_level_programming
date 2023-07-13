#include "main.h"

/**
 * _strlen - counts the length of a given string.
 * @str: the string to count it length.
 *
 * Return: the length of the string.
 */
int _strlen(char *str)
{
	int c = 0;

	while (str[c] != '0')
	{
		c++;
	}
	return (c);
}

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
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
