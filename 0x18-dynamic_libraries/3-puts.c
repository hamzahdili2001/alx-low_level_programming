#include "main.h"
/**
 * _puts - prints string
 * @str: string
 * Return:
 */

void _puts(char *str)
{
	unsigned int track;

	track = 0;

	while (*(str + track) != '\0')
	{
		_putchar(*(str + track));

		track++;
	}
	_putchar(10);
}

