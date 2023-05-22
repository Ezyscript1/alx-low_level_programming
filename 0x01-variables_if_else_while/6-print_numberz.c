#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int dg = '0';

	while (dg <= '9')
	{
		putchar(dg);
		dg++;
	}
	putchar(10);

	return (0);
}
