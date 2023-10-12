#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if c is uppercase.
 * @c: the character to check.
 * Return: 1 if uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
