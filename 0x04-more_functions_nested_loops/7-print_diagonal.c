#include "main.h"

/**
 * print_diagonal - to print diagonal line.
 * @n: number of diagonals.
 *
 * Return: nothing.
 */

void print_diagonal(int n)

{
	int i = 0, j;

	while (i < n)
	{
		j = 0;

		while (j <= i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		_putchar(10);
		i++;
	}
}
