#include "main.h"
/**
 * print_number - prints an integer.
 * @n: the integer.
 * Return: void.
 */
void print_number(int n)
{
	int j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -j;
	}
	if ((j / 10) > 0)
		print_number(j / 10);
	_putchar(48 + (j % 10));
}
