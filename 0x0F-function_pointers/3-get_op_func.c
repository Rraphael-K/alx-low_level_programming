#include <stdlib.h>
#include "3-calc.h"


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
	int count = 0;

	while (count < 5)
	{
		if (*(ops[count]).op == *s && *(s + 1) == '\0')
				return (ops[count].f);
		count++;
	}
	return (NULL);
}
