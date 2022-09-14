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
	for (multiple = 0; multiple <= 9; multiple++)
	{
		for (table = multiple + 1; table <= 9; table++)
		{
			answer = multiple * table;

			/* ensuring that it continues afer zero */
			if ((answer / 10) == 0)
			{
				/* ensuring the results are printed out */
				if (table != 0)
					_putchar(' ');
				_putchar(answer + '0');

				/* stop once the table hits 9 */
				if (table == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				/* print out the times table */
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
				/*stop once it reaches 9 */
				if (table == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
