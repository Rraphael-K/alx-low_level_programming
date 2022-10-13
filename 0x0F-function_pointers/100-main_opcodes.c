#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the operation codes of computer
 * @argc: argument count
 * @argv: Array of arguments
 *
 * Return: 1 - 2 on failure, 0 success
 */

int main(int argc, char *argv[])
{
	/* declare size and count */
	int bytes, count;
	unsigned char *function_ptr;

	/* varify if one command is present */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* determine byte size per argument */
	bytes = atoi(argv[1]);
	if (bytes  < 0)
	{
		printf("Error\n");
		exit(2);
	}
	function_ptr = (unsigned char *)main;
	count = 0;
	if (bytes > 0)
	{
		while (count < (bytes - 1))
			printf("%02hhx ", function_ptr[count++]);
		printf("%hhx\n", function_ptr[count]);
	}
	return (0);
}
