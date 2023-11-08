#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/** main - main function
 * @argc: total args
 * @argv: array of args
 * Return: returns 0
 */
int main(int argc, char * argv[])
{

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && atoi(argv[3]) == 0)
	{
		printf("Error");
		exit(100);
	}
	int num = (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	
	printf("%d", num);
	return (0);
}
