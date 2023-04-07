#include "main.h"
/**
 * clear_bit - set bit of 0 at given index
 * @n: given number
 * @index: given index
 * Return: -1 in fail or 1 in success
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}

