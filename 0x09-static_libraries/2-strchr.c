#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurance of c.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
