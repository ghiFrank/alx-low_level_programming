#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
