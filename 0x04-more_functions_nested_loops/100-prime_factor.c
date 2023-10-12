#include "main.h"
/**
 * main - main function.
 * Return: returns 0.
 */
int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (i <= 612852475143)
	{
		if (n % i == 0)
		{
			if (n / i != 1)
			{
				n = n / i;
				i = 2;
			}
			else
				break;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
