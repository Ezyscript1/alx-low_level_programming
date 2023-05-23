#include "main.h"

/**
 * _abs - to print absolute value of n
 * @n: interger to be checked
 * Return: Always 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}

	return (0);
}
