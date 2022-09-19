#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int count, num = 612852475143;

	for (count = 3; count <= 12057; count += 2)
	{
		while (num % count == 0 && num != 1)
			num /= 1;
	}
	printf("%lu\n", num);

	return (0);
}
