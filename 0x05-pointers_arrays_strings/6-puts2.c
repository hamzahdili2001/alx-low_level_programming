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
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}

