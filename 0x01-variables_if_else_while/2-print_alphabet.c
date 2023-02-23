#include <stdio.h>

/* main - entry point */
/* Return: always zero */
int main(void)
{
	char lowerAlpha;

	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
		putchar(lowerAlpha);
	}
	putchar("\n");

	return (0);
}
