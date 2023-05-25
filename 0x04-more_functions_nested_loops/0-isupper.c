#include "main.h"

/**
 * _isupper - to check if a character is upper case
 * @c: the character to be checked
 * Return: 1 if the character is upper case and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
