#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - length of string
 * @s: string
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i = 0, n = 0, j = 0, tot = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, n++)
		n += _strlen(av[i]);
	arr = malloc(sizeof(char) * n + 1);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, tot++)
			arr[tot] = av[i][j];
		arr[tot] = '\n';
		tot++;
	}
	arr[tot] = '\0';
	return (arr);
}
