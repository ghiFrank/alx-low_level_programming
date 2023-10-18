#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int arr[450];
	int i = n - 1;
	int j = 0;

	for (; i >= 0; i--)
	{
		arr[(n - 1) - i] = a[i];
	}
	for (; j < n; j++)
	{
		a[j] = arr[j];
	}
}
