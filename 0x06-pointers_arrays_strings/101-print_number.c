#include "main.h"
/**
*print_number - prints an integer
*@n: an integer
*/
void print_number(int n)
{
	unsigned int j;

	j = n;
	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}
	if (j / 10 != 0)
	{
		print_number(j / 10);
	}
	_putchar('0' + (j % 10));
}
