#include "main.h"

/**
 * print_alphabet - Function
 * Description: print alphabet from a - z
 * Return: 0
*/

void print_alphabet(void)
{

	/* 97 to 122 */

	int count;

	for (count = 97; count < 123; count++)
	{
		_putchar(count);
	}

	_putchar(10);

}

