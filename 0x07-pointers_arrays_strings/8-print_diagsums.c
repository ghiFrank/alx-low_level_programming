#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integers.
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1; i < (size * size) - 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
