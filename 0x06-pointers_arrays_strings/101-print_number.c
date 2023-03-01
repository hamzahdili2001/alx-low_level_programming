#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer given to it
 * Return: integer
*/

void print_number(int n)
{
	unsigned int mod, div, count;

	if (n < 0)
	{
		_putchar(45);
	mod = n * -1;
	}
	else
	{
		mod = n;
	}

	div = mod;
	count = 1;

	while (div > 9)
	{
		div /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((mod / count) % 10) + 48);
	}
}

