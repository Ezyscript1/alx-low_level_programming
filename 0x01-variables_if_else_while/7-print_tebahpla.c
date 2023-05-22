#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char let = 'z';

	while (let >= 'a')
	{
		putchar(let);
		let--;
	}
	putchar(10);

	return (0);
}
