#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num, count, total = 0;

	while (argc-- > 1)
	{
		for (count = 0; argv[argc][count]; count++)
		{
			if (!(isdigit(argv[argc][count])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		total += num;
	}
	print("%d\n", total);
	return 0;
}
