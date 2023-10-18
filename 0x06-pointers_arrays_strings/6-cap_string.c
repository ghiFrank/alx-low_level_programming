#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *	*cap_string - capitalizes all words of a string
 *	@n: a string
 *	Return: string with all words capitalized
 */
char *cap_string(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{
		if (isspace(n[i]) || !isalnum(n[i]))
			n[i + 1] = toupper(n[i + 1]);
	}
	return (n);
}
