#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to set the bit in
 * @index: the given index
 * Return: -1 in fail or 1 in success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1LU << index;
	*n |= mask;

	return (1);
}
