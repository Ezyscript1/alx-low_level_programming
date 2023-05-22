#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int dig = '0';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}
	putchar(10);

	return (0);
}
