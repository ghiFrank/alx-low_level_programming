#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: parameter
 * Return: 0 if n = 0 else the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum;
	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
