#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints minimum number of coins to make change
 * @argc: total arguments
 * @argv: array of arguments
 * Return: returns 1 if error, else 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int n = 0, least = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (; n < 5; n++)
		{
			if (money >= cents[n])
			{
				least += money / cents[n];
				money = money % cents[n];
				if (money % cents[n] == 0)
					break;
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
