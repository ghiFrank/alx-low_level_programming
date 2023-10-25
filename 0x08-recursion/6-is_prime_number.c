#include "main.h"
/**
 * is_prime_number - checks if n is a prime number
 * @n: number
 * @sqr: square root
 * Return: returns 1 if prime number and 0 if not
 */
int square(int n, int sqr);
int divi(int n, int y);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (divi(n, 2));
}

/**
 * divi - checks if y divides n evenly
 * @n: number
 * @y: number
 * Return: 0 if yes and 1 if no.
 */
int divi(int n, int y)
{
	if (n % y == 0)
		return (0);
	else if (y <= square(n, 1))
		return (divi(n, y + 1));
	else
		return (1);
}

/**
 * square - finds square root of a number.
 * @n: number
 * @sqr: square root
 * Return: square root
 */
int square(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (square(n, sqr + 1));
	else
		return (sqr);
}
