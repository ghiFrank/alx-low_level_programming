#include "main.h"
/**
 * print_triangle - draws a triangle in the terminal.
 * @size: size of the triangle
 * Return: void.
 */
void print_triangle(int size)
{
	int i = 1;

	if (size > 0)
	{
		for (; i <= size; i++)
		{
			int j = size - i;
			int n = 0;

			for (; j > 0; j--)
			{
				_putchar(' ');
			}
			for (; n < i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
