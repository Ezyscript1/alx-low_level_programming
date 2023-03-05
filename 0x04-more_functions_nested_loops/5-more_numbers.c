#include "main.h"

/**
 * more_numbers - to print 0-4.
 * Return: nothing.
 */

void more_numbers(void)

{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar(10);
	}
	_putchar(10);
}
