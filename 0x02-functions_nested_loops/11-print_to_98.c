#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
			if (n < 9)
			{
				_putchar('0' + n);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				_putchar(',');
				_putchar(' ');
			}
			n = -n;
		}
		else
		{
			if (n < 9)
			{
				_putchar('0' + n);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
