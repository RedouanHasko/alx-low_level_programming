#include "3-calc.h"

/**
 * get_op_func - allows the user to chouse an operation,
 * to call a certain function.
 * @s: the operator chousen by the user.
 *
 * Return: pointer to the a called function,
 * based on the chousen operation by user.
 * otherwise returns NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
