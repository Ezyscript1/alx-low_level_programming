#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = '0';
	int j;
	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		i++;
	}
	_putchar('\n');
}
