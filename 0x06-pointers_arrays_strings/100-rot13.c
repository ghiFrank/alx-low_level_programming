#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *	*rot13 - encodes a string using rot13
 *	@c: a string
 *	Return: string encoded using rot13
 */
char *rot13(char *c)
{
	char arr[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	char arr2[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *rslt = c;
	int i;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == arr2[i])
			{
				*c = arr[i];
				break;
			}
		}
		c++;
	}
	return (rslt);
}
