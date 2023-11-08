#include "main.h"
/**
 * array_iterator - iterates array
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: returns
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size <= 0)
		return (-1);
	for (; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
