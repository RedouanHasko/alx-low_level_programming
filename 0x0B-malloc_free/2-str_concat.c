#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the 1st string to concat.
 * @s2: the second string to concat.
 * Return: pointer to the new string (Success),
 * otherwise return NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, ic = 0,  len = 0;
	char *cstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0 ; s1[i] || s2[i]; i++)
	{
		len++;
	}
	cstr = malloc(sizeof(char) * len);
	if (cstr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; s1[i]; i++)
	{
		cstr[ic++] = s1[i];
	}
	for (i = 0 ; s2[i]; i++)
	{
		cstr[ic++] = s2[i];
	}
	return (cstr);
}
