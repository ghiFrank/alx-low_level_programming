#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: void.
 */
void more_numbers(void)
{
	int i = 0;

	for (i; i <= 10; i++)
	{
		int j = 0;

		for (; j < 15; j++)
		{
			if (j > 9)
				_putchar(48 + j / 10);
			_putchar(48 + j % 10);
		}
		_putchar('\n');
	}
}
