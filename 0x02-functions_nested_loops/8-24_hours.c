#include "main.h"
/**
 * jack_bauer - Hours of the day
 *
 * Return: 
 */
void jack_bauer(void)
{
	/* declare hours and minutes for the watch */
	int hrs, min;

	/* loop to create the digital watch from 00:00 am */
	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			/* end the loop */
			if (min == 59 && hrs == 24)
				continue;
		}
	}
	_putchar('\n');
}
