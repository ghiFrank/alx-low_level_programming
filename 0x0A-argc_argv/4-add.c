#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of 2 numbers
 * @argc: total arguments
 * @argv: array of arguments
 * Return: returns 1 if error, else 0
 */
int main(int argc, char *argv[])
{
	int n = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		n += atoi(argv[argc]);
	}
	printf("%d\n", n);
	return (0);
}
