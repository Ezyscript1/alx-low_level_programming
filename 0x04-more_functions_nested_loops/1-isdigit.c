#include "main.h"

/**
 * _isdigit - to chech if a character is a digit
 * @c: the character to be checked
 * Return: 1 if the charactr is a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
