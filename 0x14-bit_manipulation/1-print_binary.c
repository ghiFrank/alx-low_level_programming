#include "main.h"
/**
 * print_binary - prints a numver as binary string
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int sizo = sizeof(n) * 8, i = 0;

	while (sizo)
	{
		if (n & 1L << --sizo)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
