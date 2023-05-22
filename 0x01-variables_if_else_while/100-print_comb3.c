#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int dit1, dit2;

	for (dit1 = 0; dit1 < 9; dit1++)
	{
		for (dit2 = dit1 + 1; dit2 < 10; dit2++)
		{
			putchar((dit1 % 10) + '0');
			putchar((dit2 % 10) + '0');
			if (dit1 == 8 && dit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
