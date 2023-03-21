#include "main.h"

/**
 * _isalpha - chacks if the input is alphabet or not
 * @c: the variable to test
 *
 * Return: 1 if sucess , 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
