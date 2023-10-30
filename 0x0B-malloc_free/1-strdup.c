#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: returns a pointer
*/
char *_strdup(char *str)
{
	char *arr;
	int n;

	if (str == NULL)
		return (NULL);
	arr = malloc(sizeof(char) * strlen(str));
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < strlen(str); n++)
	{
		arr[n] = str[n];
	}
	return (arr);
}
