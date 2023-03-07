#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
