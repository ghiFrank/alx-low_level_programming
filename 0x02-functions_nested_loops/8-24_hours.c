#include "main.h"
/**
 * jack_bauer - prints from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int n;

	int j;

	for (n = 0; n <= 23; n++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}
}
