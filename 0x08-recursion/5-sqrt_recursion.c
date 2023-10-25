#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square root of a n.
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - finds square root of a number.
 * @n: number
 * @y: square root
 * Return: int
 */
int square(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (square(n, y + 1));
	else
		return (-1);
}
