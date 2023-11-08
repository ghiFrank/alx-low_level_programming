#include "function_pointers.h"
/**
 * array_iterator - iterates array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ( array && size > 0 && action)
	{
		int n = 0;
		int sizo = size;

		for (; n < sizo; n++)
		{
			action(array[n]);
		}
	}
}
