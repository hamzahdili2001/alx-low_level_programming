#include "main.h"

/**
 * print_line - prints _ as much as n.
 * @n: a number
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar(10);
}

