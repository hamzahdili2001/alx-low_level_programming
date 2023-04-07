#include "main.h"

/**
 * get_bit - get the value of bit at given index
 * @n: unsigned long integer
 * @index: the index and it start from 0
 * Return: -1 or the value of bit at given index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1LU << index;

	return ((n & mask) ? 1 : 0);
}
