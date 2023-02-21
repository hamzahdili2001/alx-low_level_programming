#include "main.h"

/**
 * main - starts the program
 * Description: print alphabet from a - z
 * Return: 0
*/

int main(void)
{

	/* 97 to 122 */

	int count;

	for (count = 97; count < 123; count++)
	{
		_putchar(count);
	}

	_putchar(10);

	return (0);
}

