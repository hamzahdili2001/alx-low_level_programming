#include "main.h"

/**
 * print_diagonal - prints \ n times.
 * @n: the giving value
 * Return: 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar(10);
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

