#include "main.h"

/**
 * print_line - to print lines.
 * @n: the number of lines hat should be printed.
 *
 * Return: Nothing
 */

void print_line(int n)

{
	n = '0';
	while (n >= '0')
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
		n++;
	}

}
