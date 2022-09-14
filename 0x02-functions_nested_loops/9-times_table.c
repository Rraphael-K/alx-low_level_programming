#include "main.h"
/**
 * times_table - Create the times table
 *
 * Return: nothing (void)
 */
void times_table(void)
{
	int multiple, table, answer;

	/* create the times table */
	for (multiple = 0; multiple < 10; multiple++)
	{
		for (table = multiple + 1; table <= 10; table++)
		{
			answer = multiple * table;

			_putchar(( nswer% 10) + '0');
			_putchar(',');

			if (multiple == table)
				continue;

		}
	}
	_putchar('\n');
}
