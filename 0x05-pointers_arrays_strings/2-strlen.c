#include "main.h"

/**
 * _strlen - to calculate the numbers of char in a string
 * @s: the string
 * Return: the lenght of string
 */

int _strlen(char *s)
{
	int lenght = 0;
	
	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
