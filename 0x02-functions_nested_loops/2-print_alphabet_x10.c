#include "main.h"

/**
 * print_alphabet_x10 - Function
 * Description: Prints 10 lines of alphabet from a to z
 * Return: 0
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}

