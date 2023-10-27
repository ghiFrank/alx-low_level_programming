#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_memset - fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
