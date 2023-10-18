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
	char arr[] = " \n\t,;.!?\"(){}";

	for (; n[i] != '\0'; i++)
	{
		int j = 0;

		for (; j < 10; j++)
		{
			if (n[i] == arr[j])
				n[i + 1] = toupper(n[i + 1]);
		}
	}
	return (n);
}
