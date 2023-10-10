#include <main.h>
/**
 *main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	char c[] = "_putchar";

	int n;

	for (n = 0; c[n] != '\0'; n++)
	{
		_putchar(c[n]);
	}
	return (0);
}
