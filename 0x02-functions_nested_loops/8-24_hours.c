#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hrs, mins = 0;

	while (hrs <= 24)
	{
		_putchar(hrs);
		_putchar(':');

		for (mins = 0; mins <= 60; mins++)
		{
			_putchar(mins);
			_putchar('\n');
		}
		hrs++;
	}
}
