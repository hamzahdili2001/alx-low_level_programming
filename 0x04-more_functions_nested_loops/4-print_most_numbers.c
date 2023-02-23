#include "main.h"
/**
 * print_most_numbers -  prints numbers form 0 to 9 exept 2 and 4
 *
 * Return: 0.
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar(10);

}
