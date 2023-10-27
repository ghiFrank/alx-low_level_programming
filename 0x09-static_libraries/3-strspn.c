#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string
 * @accept: substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
