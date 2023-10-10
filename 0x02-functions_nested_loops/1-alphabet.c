#include "main.h"
/*
 *main - main function
 *
 *Return: returns 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char n;
		for (n = 'a';n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
	return (0);
}
