#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - reverses string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	for (; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
