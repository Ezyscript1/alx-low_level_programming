#include "main.h"

/**
 * reset_to_98 - to change the values of a variable using the pointer
 * @n: the address of the pointer
 */

void reset_to_98(int *n)
{
	int k;

	n = &k;
	*n = 98;

}
