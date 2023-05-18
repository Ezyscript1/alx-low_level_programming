#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu btye(s)", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}