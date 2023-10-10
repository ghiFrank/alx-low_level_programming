#include <stdio.h>
/**
 * main - main function
 */
void main(void) 
{
	int i;

	int total = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total = total + i;
	}
       	printf("%d",total);
}
