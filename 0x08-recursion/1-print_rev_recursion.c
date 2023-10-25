#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_print_rev_recursion - prints a string in reverse.
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
		printf("%c", s[i]);
}
