#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int num = '0';
	char let = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar(10);

	return (0);
}
