#include "main.h"

/**
 * _strlen - gets the length of string
 * @s: the string
 * Return: length
*/

int _strlen(char *s)
{
	unsigned long int length;
	
	if ((*s + 0) != '\n')
	{
		while (*(s + length) != '\0')
		{
			length++;
		}

		return (length);
	}
	else
		return (0);
}

