#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: substring
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
