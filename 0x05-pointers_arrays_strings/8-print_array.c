#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: first integer
 * @n: second integer
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
