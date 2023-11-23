#include "main.h"
/**
 * flip_bits - return number of bits needed to be flipped to transform
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to convert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned int i = 0;

	while (j)
	{
		if (j & 1ul)
			i++;
		j = j >> 1;
	}
	return (i);
}
