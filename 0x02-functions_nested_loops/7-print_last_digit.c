#include "main.h"

/**
 * print_last_digit - to print the last digit pf a given number
 * @n: the int to be checked
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');

	return (ld);
}
