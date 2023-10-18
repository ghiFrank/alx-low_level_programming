#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * leet - encodes a string into 1337
 * @c: a string
 * Return: string encoded int 1337
 */
char *leet(char *c)
{
	int arr[] = {4, 3, 0, 7, 1};
	char arr2[] = {'a', 'e', 'o', 't', 'l'};
	char *rslt = c;
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == arr2[i] || *c == (arr2[i] - 32))
				*c = '0' + arr[i];
		}
		c++;
	}
	return (rslt);
}
