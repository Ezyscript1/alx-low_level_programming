#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int sml = 'a';

	while (sml <= 'z')
	{
		if (sml != 'q' && sml != 'e')
		{
			putchar(sml);
		}
		sml++;
	}
	putchar(10);

	return (0);
}
