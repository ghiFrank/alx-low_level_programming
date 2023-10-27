#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
