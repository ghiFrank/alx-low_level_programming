#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: int
* Return: returns a pointer
*/
void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);

	if (arr == NULL)
		return (98);
	return (arr);
}
