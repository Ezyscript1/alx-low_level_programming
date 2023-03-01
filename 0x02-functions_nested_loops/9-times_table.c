#include "main.h"

/**
 * times_table - function to print times table
 *
 * Return: none - void function
 */
void times_table(void)
{
	int i, j, ret;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ret = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if ((ret < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((ret % 10) + '0');
			}
			else if (ret > 0)
			{
			_putchar((ret / 10) + '0');
			_putchar((ret % 10) + '0');
			}
			else
			{
				_putchar((ret % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
