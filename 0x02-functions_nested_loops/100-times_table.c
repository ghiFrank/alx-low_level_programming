#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times
 */
void print_times_table(int n)
{
	int i, j, y;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				y = i * j;
				if (y <= 99)
					_putchar(' ');
				if (y <= 9)
					_putchar(' ');
				if (y >= 100)
				{
					_putchar('0' + (y / 100));
					_putchar('0' + ((y / 10) % 10));
				}
				else if (y <= 99 && y >= 10)
				{
					_putchar('0' + (y / 10));
				}
				_putchar('0' + (y % 10));
			}
			_putchar('\n');
		}
	}
}
