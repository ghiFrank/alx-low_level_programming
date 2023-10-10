#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
