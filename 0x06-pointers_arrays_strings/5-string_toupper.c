#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: a string
 * Return; string to uppercase
 */
char *string_toupper(char *n)
{
    int i = 0;

    for (; n[i] != '\0'; i++)
        {
            if (islower(n[i]))
                n[i] = toupper(n[i]);
        }
    return (n);
}
