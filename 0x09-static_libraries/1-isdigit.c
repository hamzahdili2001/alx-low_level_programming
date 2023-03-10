#include "main.h"

/**
 * _isdigit - checks if the number given to it is from 0 - 9
 * @c: the number given
 * Return: 1 if c is digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

