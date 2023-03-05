#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9 excpt 4 & 2 .
 *
 * Return: Nothing.
 */

void print_most_numbers(void)

{
	int i = 0;

	while (i <= 9)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
