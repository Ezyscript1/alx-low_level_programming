#include "main.h"

/**
 * print_square - to print squares.
 * @size: the numbers of squares to be printed.
 *
 * Return: Nothing.
 */

void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = i;

		while (j > '0')
		{
			_putchar('#');
			j--;
		}
		_putchar(10);
		i++;
	}
}
