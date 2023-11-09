#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (; i < n; i++)
	{
		printf("%s%s", va_arg(args, int) ? va_arg(args, int) : "(nil)" , i < n ? separator : "\n");
	}
}
