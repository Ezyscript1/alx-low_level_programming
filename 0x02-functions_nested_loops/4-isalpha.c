#include "main.h"

/**
 * _isalpha - function
 *
 * @c: The character to evaluate
 *
 * Return: Get 1 if c is lowercase or uppercase,
 * get 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
