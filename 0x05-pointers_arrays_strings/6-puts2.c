#include "main.h"

/**
 * puts2 - prints chars form str steped by 2
 * @str: stirng given
 *
 * Return:
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar(10);
}

