#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - counts length of str
 * @str: string counter
 * Return: length of a string
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
 * argstostr - function that concatenates all the arguments of program
 * @ac: counter for args passed to the function
 * @av: array of arguments
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *nstr = NULL;
	int k = 0, sum = 0, temp = 0, i = ac, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (ac--)
	{
		sum += (len(av[ac]) + 1);
	}
	nstr = (char *) malloc(sum + 1);
	if (nstr != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
			{
				nstr[j + temp] = av[k][j];
			}
			nstr[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		nstr[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (nstr);
}
