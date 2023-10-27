#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks if c is a digit.
 * @c: the character to check.
 * Return: 1 if c is a digit, 0 if not.
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
