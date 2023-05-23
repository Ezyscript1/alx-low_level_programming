#include "main.h"

/**
 * print_alphabet_x10 - to print lower case en times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int nl = 1;

	while (nl <= 10)
	{
		int let = 'a';

		while (let <= 'z')
		{
		_putchar(let);
		let++;
		}
		_putchar(10);
		nl++;

	}
}
