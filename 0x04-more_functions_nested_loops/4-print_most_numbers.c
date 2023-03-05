#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9 excpt 4 & 2 .
 *
 * Return: Nothing.
 */

void print_most_numbers(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != 4) && (i != 2))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
