#include "main.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
