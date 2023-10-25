#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns value of x raised to the power of y.
 * @x: number
 * @y: power
 * Return: value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
