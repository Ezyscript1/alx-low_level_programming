#include "main.h"

/**
 * _puts - toprint a string
 * @str: the string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
