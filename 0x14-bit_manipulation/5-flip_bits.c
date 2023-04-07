#include "main.h"
/**
 * flip_bits -  returns the number of bits you would
 *							need to flip to get from one number to another
 *
 * @n: number 1
 * @m: number 2
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int i = 0;

	while (diff != 0)
	{
		if (diff & 1)
			i++;

		diff >>= 1;
	}

	return (i);
}
