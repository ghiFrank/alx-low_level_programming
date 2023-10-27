#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src
 * Return: returns a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
