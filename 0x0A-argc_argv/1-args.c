#include "main.h"
#include <stdio.h>
/**
 * main - Print number of arguments
 * @argc: Argument counter
 * @argv: Argument value
 * REturn: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		pritnf("%d\n", argc - 1);
	return (0);
}
