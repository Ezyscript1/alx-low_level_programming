#include "main.h"

/**
 * _islower - to check for lovercase letter
 * @c: the argument to be checked
 * Return: 1 if the character is upper case and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
