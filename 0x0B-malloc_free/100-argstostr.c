#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		n += strlen(av[i]) - 1;
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
