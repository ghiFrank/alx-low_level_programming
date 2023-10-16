#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main function
 * Return - returns 0
 */
int main(void)
{
	int n;
	char c;
	srand(time(NULL));
	for (; n <= 2645; n += c)
	{
		c = rand() % 128;
		putchar(c);
	}
	putchar(2772 - n);
	return (0);
}
