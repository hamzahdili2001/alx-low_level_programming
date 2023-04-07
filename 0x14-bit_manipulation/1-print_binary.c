#include "main.h"
/**
 * print_binary - convert numbers to bin without any
 * help for outside lib
 * @n: unsigned long integer to convert
 * Return: Nothing.
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leadingZero = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
				leadingZero = 0;
		}
		else if (!leadingZero)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (leadingZero)
		_putchar('0');
}
