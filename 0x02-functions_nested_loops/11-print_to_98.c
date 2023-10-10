#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n < 0)
			_putchar('-');
		if (n < 9)
		{
			_putchar('0' + abs(n));
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + abs(n % 10));
			_putchar('0' + abs(n / 10));
			_putchar(',');
			_putchar(' ');
		}
	}
}
