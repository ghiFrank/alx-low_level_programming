#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	long pc1 = 1, pc2 = 2, pc3;
	long pc1_h1, pc1_h2, pc2_h1, pc2_h2;
	long h1, h2;

	printf("1, 2, ");
	for (i = 3; i < 92; i++)
	{
		pc3 = pc1 + pc2;
		printf("%ld", pc3);
		pc1 = pc2;
		pc2 = pc3;
		if (i < 98)
			printf(", ");
	}
	for (i = 93; i < 99; i++)
	{
		h1 = pc1_h1 + pc2_h1;
		h2 = pc1_h2 + pc2_h2;
		printf("%ld%ld", h1, h2);
		pc1_h1 = pc2_h1;
		pc1_h2 = pc2_h2;
		pc2_h1 = h1;
		pc2_h2 = h2;
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
