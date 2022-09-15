#include <stdio.h>
#include "main.h"

/**
 * main - dates
 * Return: 0
 */

int main(void)
{
	int month, day, year;

	printf("Enter the day: ");
	scanf("%02d", &day);
	printf("\nEnter the month: ");
	scanf("%02d", &month);
	printf("\nEnter the year: ");
	scanf("%04d", &year);
	printf("\n");

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
