#include "main.h"

/**
 * jack_bauer- every minute of the day of Jack Bauer.
 * Starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
		}

		_putchar(10);
	}
}
