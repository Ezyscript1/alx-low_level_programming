#include "main.h"

/**
 * print_diagonal - to print diagonal line.
 * @n: number of diagonals.
 *
 * Return: nothing.
 */

void print_diagonal(int n)

{
	int i = 0;

	while (i < n)
	{
		_putchar(' ');
		i++;
		_putchar('\\');
	}
	_putchar('\n');
}
