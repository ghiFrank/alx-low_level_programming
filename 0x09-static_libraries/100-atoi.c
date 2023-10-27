#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: buffer
 * Return: returns the integer
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	for (; *s; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	}
	return (n * sign);
}
