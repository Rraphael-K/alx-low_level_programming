#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Select the correect function as per provided operation
 * @s: Input character as perr operation
 *
 * Return: Pointer to correct function
 */

int (*get_op_func(char *s))(int, int)
{
	/* get the operator, +, -, *, /, % */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
		{
				return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
