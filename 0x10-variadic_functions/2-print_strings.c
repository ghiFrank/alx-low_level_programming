#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n-1) && separator)
			printf("%s", separator);
	}
	va_end(args);
}
