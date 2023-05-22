#include "main.h"

/**
 * _islower - Function
 * Descritpion: check if the passing alphabet is lowercase
 * Return: 1 if true or 0 if false
 * @c: store an integer value
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

