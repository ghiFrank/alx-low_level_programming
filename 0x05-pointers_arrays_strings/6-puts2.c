#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
    int len = strlen(str);
    int i = len / 2;

    for (; i < len; i++)
    {
        if (strlen(str) % 2 != 0)
        {
            if (i + 1 < strlen(str))
                printf("%c", str[i + 1]);
            else
                break;
        }
        else
            printf("%c", str[i]);
    }
    printf("\n");
}
