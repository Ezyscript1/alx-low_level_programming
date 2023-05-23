#include "main.h"

/**
 * print_alphabet - To print alphabet in lower case
 * Return: void
 */

void print_alphabet(void)
{
	int alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar(10);
}
