#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - allocates a memory block 
 * @ptr: pointer to memory
 * @old_size: size in bytes
 * @new_size: size in bytes of the new memory block
 *
 * Return: NULL if new_size = 0 and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)arr + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (arr);
}
