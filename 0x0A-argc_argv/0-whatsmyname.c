#include "main.h"
#include <stdio.h>
/**
 * main - Print name of project
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
