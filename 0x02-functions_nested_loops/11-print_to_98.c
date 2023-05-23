#include <stdio.h>

/**
 * print_to_98 - function to print to 98
 *
 * @n: parameter
 *
 * Return: natural number
 */
void print_to_98(int n)
{
	int upp = 98;

	if (n > upp)
	{
	while (n >= upp)
	{
	if (n != upp)
	{
	printf("%d%s", n, ", ");
	}
	else
	{
	printf("%d", n);
	}
	n--;
	}
	}
	else
	{
	while (n <= upp)
	{
	if (n != upp)
	{
	printf("%d%s", n, ", ");
	}
	else
	{
	printf("%d", n);
	}
	n++;
	}
	}
	putchar(10);
}
