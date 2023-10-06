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
			int y = 1 + j;

			for (; y <=9; y++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + y);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');
	return (0);
}
