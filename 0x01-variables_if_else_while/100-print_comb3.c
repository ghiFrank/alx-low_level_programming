#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int j = 1 + i;

		for (; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
