#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: returns 0
 */
void print_remaining_days(int month, int day, int year)
{
	int days_remaining = 0;

	day = convert_day(month, day);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2)
		{
			/* If is leap yr & past Feb 29th, add 1 day to account */
			day++;
		}
		days_remaining = 366 - day;
	}
	else
	{
		days_remaining = 365 - day;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", days_remaining);
}
