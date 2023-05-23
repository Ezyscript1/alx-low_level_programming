#include "main.h"

/**
 * times_table - function to print times table
 *
 * Return: none - void function
 */
void times_table(void)
{
	int co = 0;
	int ro = 0;
	int unit = 0;
	int ten = 0;
	int n = 0;

	while (ro < 10)
	{
	while (co < 10)
	{
	n = co * ro;
	unit = n % 10;
	ten = (n - unit) / 10;
	if (co > 0)
	{
	_putchar(' ');
	(ten <= 0) ? _putchar(' ') : _putchar(ten + '0');
	}
	_putchar(unit + '0');
	if (co < 9)
	_putchar(44);
	co++;
	}
	co = 0;
	ro++;
	_putchar(10);
	}
}
