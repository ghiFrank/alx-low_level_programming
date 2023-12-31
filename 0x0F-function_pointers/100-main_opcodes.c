#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: total args
 * @argv: array of args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (n--)
		printf("%02hhx%s", *ptr++, n ? " " : "\n");
	return (0);
}
