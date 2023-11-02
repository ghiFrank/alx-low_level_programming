#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * memfill - fills memory
 * @c: pointer
 * @b: constant
 * @m: max bytes
 * Return: pointer
 */
char memfill(char *c, char b, unsigned int m)
{
	char *arr2 = c;
	
	while (m--)
		*c++ = b;
	return (arr2);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arr = malloc(sizeof(int) * nmemb);
	if ( arr == 0)
		return (NULL);
	memfill(arr, 0, sizeof(int) * nmemb);
	return (arr);
}
