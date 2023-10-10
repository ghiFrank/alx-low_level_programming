#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints last digit
 *@n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	_putchar (abs(n % 10));
	return (abs(n % 10));
}
