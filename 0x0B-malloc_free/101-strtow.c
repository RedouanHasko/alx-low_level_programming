#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - counts the length of str
 * @str: string to be counted
 * Return: length of string
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
		{
			len++;
		}
	}
	return (len);
}
/**
 * nbr_w - counts the number of words in str
 * @str: string to be used
 * Return: number of words in string
 */
int nbr_w(char *str)
{
	int i = 0, w = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			w += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (w);
}
/**
 * strtow - splits a stirng into words
 * @str: string to be splited
 * Return: pointer to the array of splited words
 */
char **strtow(char *str)
{
	char **sp;
	int i, j = 0, tmp = 0, size = 0, words = nbr_w(str);

	if (words == 0)
		return (NULL);
	sp = (char **) malloc(sizeof(char *) * (words + 1));
	if (sp != NULL)
	{
		for (i = 0; i <= len(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				sp[j] = (char *) malloc(sizeof(char) * size + 1);
				if (sp[j] != NULL)
				{
					while (tmp < size)
					{
						sp[j][tmp] = str[(i - size) + tmp];
						tmp++;
					}
					sp[j][tmp] = '\0';
					size = tmp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(sp[j]);
					free(sp);
					return (NULL);
				}
			}
		}
		sp[words] = NULL;
		return (sp);
	}
	else
	return (NULL);
}
