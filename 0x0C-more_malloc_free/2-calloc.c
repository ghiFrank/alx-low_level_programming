#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	arr = malloc(size * nmemb);
	if (arr == 0)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		arr[nmemb] = 0;
	return (arr);
}
