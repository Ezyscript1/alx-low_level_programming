#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	while(letter <	'z')
	{
		if (letter != 'e' && letter != 'q')
		letter++;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

