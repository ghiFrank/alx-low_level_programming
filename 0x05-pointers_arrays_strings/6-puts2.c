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
	int len = strlen(str);

	for (; i < len; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
