#include "main.h"

/**
 * print_times_table - print times table of any input.
 * parameter - n
 * Return: Nothing
 */

void print_times_table(int n)
{

	int i, j, ret;
	if ((n < 15) && (n > 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ret = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (ret >= 10)
				{
					_putchar((ret / 10) + '0');
					_putchar((ret % 10) + '0');
				}
				else if (ret < 10)
				{
					_putchar(' ');
					_putchar((ret % 10) + '0');
				}
				else
				{
					_putchar((ret % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
}
