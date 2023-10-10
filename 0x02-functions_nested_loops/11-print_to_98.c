#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 */
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c)
{
		return (write(1, &c, 1));
}

void print_to_98(int n)
{
		if (n <= 98)
		{
				for (; n <= 98; n++)
				{
						if (n < 0)
						{
								n = -n;
								_putchar('-');
								if (n < 9)
								{
										_putchar('0' + n);
										_putchar(',');
										_putchar('	');
								}
								else
								{
										_putchar('0' + n / 10);
										_putchar('0' + n % 10);
										_putchar(',');
										_putchar('	');
								}
								n = -n;
						}
						else
						{
								if (n < 9)
								{
										_putchar('0' + n);
										_putchar(',');
										_putchar('	');
								}
								else
								{
										_putchar('0' + n / 10);
										_putchar('0' + n % 10);
										if (n != 98)
										{
												_putchar(',');
												_putchar('	');
										}
								}
						}
				}
		}
		else
		{
				for (; n >= 98; n--)
				{
						if (n > 99)
						{
								_putchar('0' + (n / 100));
								_putchar('0' + (n % 100) / 10);
								_putchar('0' + n % 10);
								_putchar(',');
								_putchar('	');
						}
						else
						{
								_putchar('0' + n / 10);
								_putchar('0' + n % 10);
								if (n != 98)
								{
										_putchar(',');
										_putchar('	');
								}
						}
				}
		}
}
