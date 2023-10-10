#include "main.h"
#include <stdio.h>
/**
 * numLength - returns the length of number
 *@num: number
 * Return: number of digits
 */
int numLength(int num)
{
	int length = 0;
	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i, ini;
	long pc1 = 1, pc2 = 2, pc3;
	long mx = 100000000, pc1h = 0, pc2h = 0, pc3h = 0;

	for (i = 1; i <= 98; i++)
	{
		if (pc1h > 0)
			printf("%lu", pc1h);
		ini = numLength(mx) - 1 - numLength(pc1);
		while (pc1h > 0 && ini > 0)
		{
			printf("%d", 0);
			ini--;
		}
		printf("%lu", pc1);
		pc3 = (pc1 + pc2) % mx;
		pc3h = pc1h + pc2h + (pc1 + pc2) / mx;
		pc1 = pc2;
		pc1h = pc2h;
		pc2 = pc3;
		pc2h = pc3h;
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
