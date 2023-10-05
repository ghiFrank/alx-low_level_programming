#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void) 
{
	 printf("Size of char: %zu byte(s)\n", sizeof(char));
	 printf("Size of an int: %zu byte(s)\n", sizeof(int));
	 printf("Size of a long: %zu byte(s)\n", sizeof(long));
	 printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
	 printf("Size of a float: %zu byte(s)\n", sizeof(float));
	 return (0);
}
