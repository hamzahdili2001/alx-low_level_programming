#include "main.h"

/**
 * _isalpha - function
 * Description : check the value if it alphabet
 * @c : takes integer value
 * Return: 0 if false or 1 if true
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

