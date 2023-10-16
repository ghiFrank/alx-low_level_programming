#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (strlen(str) % 2 != 0)
		i = ((len - 1) / 2) + 1;
	else
		i = len / 2;

	for (; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
