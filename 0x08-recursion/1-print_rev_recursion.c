#include "main.h"
/**
 * _print_rev_recursion - reverse a string
 * @str: stirng array
 * Return: nothing
*/

void _print_rev_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(str + 1);
	_putchar(*str);
}

