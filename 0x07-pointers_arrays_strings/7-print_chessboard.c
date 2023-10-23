#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: size of chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	for (; i < 8; i++)
	{
		int j = 0;

		for (; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
