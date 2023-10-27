#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_memcpy - fills memory with a constant byte.
 * @src: first memory area
 * @dest: second constant byte
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
