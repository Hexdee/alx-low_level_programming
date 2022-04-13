#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - get the function for a operator
 * @s: the opertor
 * Return: pointer to the opertor function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
