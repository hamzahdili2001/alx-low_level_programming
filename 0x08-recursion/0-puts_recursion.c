#include "main.h"

/**
 * _puts_recursion - prints string to the output
 * @str: array of chars
 * Return: nothing
*/

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*str);

	_puts_recursion(str + 1);
}

