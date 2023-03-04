#include "main.h"

/**
 * _isupper - check for uppuer case character.
 * @c - The character to be checked.
 *
 * Return: 1 if the character is uppercase.
 * else return 0.
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
}
