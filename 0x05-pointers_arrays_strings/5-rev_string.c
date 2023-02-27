#include "main.h"


/**
 * get_length - Gets the length of String
 * @str: the string
 * Return: length of str
*/

int get_length(char *str)
{
	unsigned int length;

	length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * rev_string - reverse a stirng
 * @s: String
 * Return: String reversed
*/

void rev_string(char *s)
{
	int length, i;
	char temp;

	length = get_length(s);
	/*Changing some code style*/
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

