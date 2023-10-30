#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int sizo;
	int n;
	int si1;
	int si2;

	if (s1 == NULL)
		si1 = 0;
	else
		si1 = strlen(s1);
	if (s2 == NULL)
		si2 = 0;
	else
		si2 = strlen(s2);
	sizo = si1 + si2;
	arr = malloc(sizeof(char) * (sizo + 1));
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < sizo; n++)
	{
		if (n < si1)
			arr[n] = s1[n];
		else
			arr[n] = s2[n - si1];
	}
	arr[n] = '\0';
	return (arr);
}
