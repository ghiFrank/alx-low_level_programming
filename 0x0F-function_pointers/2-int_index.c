#include "function_pointers.h"
/**
 * int_index - iterates array
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: returns
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int n = 0;

		for (; n < size; n++)
		{
			if (cmp(array[n]))
				return (n);
		}
	}
	return (-1);
}
