#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int length, i;
	int *arr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr = malloc(sizeof(int) * length);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < length; i++)
		arr[i] = min++;
	return (arr);
}
