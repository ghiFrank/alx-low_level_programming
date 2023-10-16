#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int i = strlen(s);
	char rev[strlen(s)];

	for (; i > 0; i--)
	{
		rev[strlen(s) - i] = s[i - 1];
	}
	rev[strlen(s)] = '\0';
	strcpy(s, rev);
}
