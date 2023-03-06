#include "main.h"

/**
 * print_line - to print lines.
 * @n: the number of lines hat should be printed.
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
