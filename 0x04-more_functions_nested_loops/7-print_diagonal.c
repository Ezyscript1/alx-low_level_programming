#include "main.h"

/**
 * print_diagonal - to print diagonal line.
 * @n: number of diagonals.
 *
 * Return: nothing.
 */

void print_diagonal(int n)

{
	int i, j;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			j = i;

			{
				while (j > 0)
				{
					_putchar('_');
					j--;
				}
				_putchar(92);
				_putchar(10);
			}
		}
	}
	else
	{
		_putchar(10);
	}
}
