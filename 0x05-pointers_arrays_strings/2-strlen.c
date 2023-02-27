#include "main.h"

/**
 * _strlen - gets the length of string
 * @s: the string
 * Return: length
*/

int _strlen(char *s)
{
	int length;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}

