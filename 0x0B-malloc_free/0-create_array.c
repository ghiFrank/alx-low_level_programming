#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return: returns pointer to the array or NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size < 2)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	for (n = 0; n < size; n++)
	{
		arr[n] = c;
	}
	return (arr);
}
