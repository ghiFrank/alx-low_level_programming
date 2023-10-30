#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int sizo;
	int n;

	if (s1 == NULL)
		sizo = strlen(s2);
	else if (s2 == NULL)
		sizo = strlen(s1);
	else
		sizo = strlen(s1) + strlen(s2);
	arr = malloc(sizeof(char) * (sizo + 1));
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < sizo; n++)
	{
		if (n < strlen(s1))
			arr[n] = s1[n];
		else
			arr[n] = s2[n - strlen(s1)];
	}
	arr[n] = '\0';
	return (arr);
}
