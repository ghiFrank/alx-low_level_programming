#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - prints a string in reverse.
 * @s: the string
 */
void _puts_recursion(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
		printf("%c", s[i]);
}
