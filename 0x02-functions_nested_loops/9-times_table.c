#include "main.h"

/**
 * times_table - prints the times table from 0 - 9.
 * Return: Nothing.
*/

void times_table(void)

{
	int i, j, ret;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ret = i * j;
			if (j != 0)
			{
				_putchar(' ');
				_putchar(',');
			}
			else if (ret >= 10)
			{
				_putchar((ret / 10) + 'o');
				_putchar((ret % 10) + '0');
			}
			else if (ret < 10 && j > 0)
			{
				_putchar(' ');
				_putchar(ret);
			}
		}
		_putchar(10);
	}
}
