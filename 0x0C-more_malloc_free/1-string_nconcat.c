#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if  (s2 == NULL)
		s2 = "";
	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
        for (s2l = 0; s2[s2l] != '\0'; s2l++)
                ;
	arr = malloc(s1l + n + 1);
	if (arr == NULL)
		return(NULL);
	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
