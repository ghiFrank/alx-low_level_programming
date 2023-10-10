#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times
 */
void print_times_table(int n)
{
	int i;

	int j;

	if ( n < 15 || n < 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				if (j * i < 10)
				{
					_putchar('0' + (i * j));
					if (i != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						if (j * (i + 1) < 10)
							_putchar(' ');
					}
				}
				else if (j * i < 100)
				{
					_putchar('0' + ((i * j) / 10));
					_putchar('0' + (i * j) % 10);
					if (i != n)
					{
						_putchar(',');
						_putchar(' ');
						if (j * (i + 1) < 100)
							_putchar(' ');
					}
				}
				else
				{
					_putchar('0' + ((i * j) / 100));
					_putchar('0' + ((i * j) % 100) / 10);
					_putchar('0' + (i * j) % 10);
					if (i != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
