#include "main.h"

/**
 * more_numbers - to print 0-4.
 * Return: nothing.
 */

void more_numbers(void)

{

	int i = 0;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			if (j >= 0)
			{
				_putchar((j % 10) + '0');
			}
		}
		_putchar(10);
	}
}
