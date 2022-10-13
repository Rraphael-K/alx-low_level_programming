#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Perform addition
 * @a: Integer Input
 * @b: Integer Input
 *
 * Return: sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Perform subtraction
 * @a: Integer Input
 * @b: Integer Input
 *
 * Return: sum (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Perform multiplication
 * @a: Integer Input
 * @b: Integer Input
 *
 * Return: sum (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Perform division
 * @a: Integer Input
 * @b: Integer Input
 *
 * Return: sum ( a / b)
 */
int op_div(int a, int b)
{
	/* ensure inout is  not zero */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Perform modulor cal
 * @a: Integer input
 * @b: Integer Input
 *
 * Return: sum (a % b)
 */
int op_mod(int a, int b)
{
	/* check if b is zero */
	if (b == 0)
	{
		printf("Erro\n");
		exit(100);
	}

	return (a % b);
}
