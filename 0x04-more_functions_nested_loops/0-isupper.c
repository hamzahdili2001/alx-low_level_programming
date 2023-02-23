#include "main.h"

/**
 * _isupper - checks if the giving value is upper or lower.
 * @c: the giving value
 * Return: 1 if its upper, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

