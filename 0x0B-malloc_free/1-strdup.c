#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: returns a pointer
*/
char *_strdup(char *str)
{
	char *arr;
	int n;
	int sizo;

	if (str == NULL)
		return (NULL);
	sizo = strlen(str);
	arr = malloc(sizeof(char) * (sizo + 1));
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < sizo; n++)
	{
		arr[n] = str[n];
	}
	return (arr);
}
