#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of bytes allocated in memory.
 *
 * Return: the pointer if success, otherwise NULL.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
