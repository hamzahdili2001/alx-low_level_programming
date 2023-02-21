#include "main.h"

/**
 * _abs - Function
 * Description: return abs value of a given number
 * @j: the giving value
 * Return: value
 */

int _abs(int j)
{
	if (j == 0)
	{
		return (0);
	}
	else if (j > 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
	_putchar(10);
}

