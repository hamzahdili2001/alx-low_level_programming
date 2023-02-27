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
 * print_rev - print string in reverse
 * @s: string
 * Return:
 */

void print_rev(char *s)
{
	int count;

	count = get_length(s);

	while (count != 0)
	{
		_putchar(*(s + count));

		count--;
	}
	_putchar(10);
}

