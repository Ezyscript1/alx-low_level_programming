#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int sml = 'a';
	int cap = 'A';

	while (sml <= 'z')
	{
		putchar(sml);
		sml++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar(10);

	return (0);
}
