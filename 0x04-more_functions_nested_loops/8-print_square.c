#include "main.h"
/**
 * print_square - draws a square in the terminal.
 * @size: size of square
 * Return: void.
 */
void print_square(int size)
{
	int i = 0;

	if (size)
	{
		for (; i < size; i++)
		{
			int j = 0;

			for (; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
