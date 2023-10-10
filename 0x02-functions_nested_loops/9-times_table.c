#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int n;

	int j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j * n > 9)
			{
				_putchar('0' + ((n * j) / 10));
				_putchar('0' + ((n * j) % 10));
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (n * j));
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
