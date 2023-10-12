#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of '\'
 * Return: void.
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			int j = 0;

			for (; j <= i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
