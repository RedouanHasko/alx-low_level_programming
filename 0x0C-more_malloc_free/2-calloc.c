#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements number.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * otherwise returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, rs;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	rs = nmemb * size;
	p = malloc(rs);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < rs ; i++)
	{
		p[i] = 0;
	}
	return (p);
}
