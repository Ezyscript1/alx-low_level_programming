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
		if (letter == 'q' || 'e')
		break;
		letter++;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

