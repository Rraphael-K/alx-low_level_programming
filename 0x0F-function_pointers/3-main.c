#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-main.h"

/**
 * main - Perform simple operations
 * @argc: arguments count
 * @argv: Array of arguments
 * Return: 0 on success, 98 on error, 99 on Illigal operator
 */

int main(int argc, char *argv[])
{
	/* function argument assignement */
	int (*func)(int, int);

	/* if error, retuyrn 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* get operator and assign it */
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* perform operations */
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
