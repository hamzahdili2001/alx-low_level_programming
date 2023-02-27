#include "main.h"


/**
 * get_length - Gets the length of String
 * @str: the string
 * Return: length of str
*/

int get_length(char *str)
{
	unsigned int length;

	length = 0;


	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}



/**
 * puts_half - prints half of a string
 * @str: string given
 *
 * Return:
 */

void puts_half(char *str)
{
	int length, i;

	length = get_length(str) + 1;

	for (i = length / 2; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}

