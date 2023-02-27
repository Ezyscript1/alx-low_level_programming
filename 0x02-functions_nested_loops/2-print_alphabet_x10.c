#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 1;
	while (i <= 10)
	{
		char j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
