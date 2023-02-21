#include "main.h"

/**
 * main - start the program
 * Description: print _putchar
 * Return: 0
*/

int main (void)
{
	int length, i;

	char chars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	length = sizeof(chars) / sizeof(char);

	for (i = 0; i < length; i++)
	{
		_putchar(chars[i] + 0);
	}

	_putchar(10);

	return (0);
}

