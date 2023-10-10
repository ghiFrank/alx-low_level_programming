#include "main.h"
#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	long pc1 = 1;
	long pc2 = 2;
	long pc3;
	long total = 2;

	for (i = 3; i <= 50; i++)
	{
		pc3 = pc1 + pc2;
		if (pc3 % 2 == 0)
			total = total + pc3;
		pc1 = pc2;
		pc2 = pc3;
	}
	printf("%d\n", total);
	return (0);
}
