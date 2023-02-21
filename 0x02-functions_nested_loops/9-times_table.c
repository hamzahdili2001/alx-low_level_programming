#include "main.h"

/**
 * times_table - Function
 * Description: prints 9 times table starting with 0
 * Return: time tabes
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}

		_putchar('\n');
	}
}

