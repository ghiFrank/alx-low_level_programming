#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * is_sep - checks if c is a separator
 * @c: a character
 * Return: 1 if true, 0 if false
 */
int is_sep(char c)
{
	int i;
	char arr[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 13; i++)
	{
		if (c == arr[i])
			return (1);
	}
	return (0);
}

/**
 * isLower - checks if ASCII is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * cap_string - capitalizes all words of a string
 * @n: a string
 * Return: string with all words capitalized
 */
char *cap_string(char *n)
{
	char *ptr = n;
	int sep = 1;

	while (*n)
	{
		if (is_sep(*n))
			sep = 1;
		else if (isLower(*n) && sep)
		{
			*n -= 32;
			sep = 0;
		}
		else
			sep = 0;
		n++;
	}
	return (ptr);
}
