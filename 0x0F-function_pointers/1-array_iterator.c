#include "main.h"
/**
 * array_iterator - iterates array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int n = 0;

	for (; n < size; n++)
	{
		action(array[n]);
	}
}
