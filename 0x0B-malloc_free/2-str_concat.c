#include <stdlib.h>

/**
 * sizeOfStr - get Length of string
 * @string: given string
 * Return: length of stirng
*/
size_t sizeOfStr(char *string)
{
	int size = 0;

	while (*(string + size))
	{
		size++;
	}

	return (size);
}
/**
 * str_concat - Concat two strings
 * @s1: string one
 * @s2: string two
 * Return: a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	size_t size;
	char *newStr;
	unsigned int i, sizeOfNewStr, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = sizeOfStr(s1) + sizeOfStr(s2);

	newStr = malloc((size * sizeof(s1[0])) + 1);
	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	for (i = 0; i < sizeOfStr(s1); i++)
	{
		newStr[i] = s1[i];
	}
	sizeOfNewStr = sizeOfStr(newStr);

	j = 0;
	for (i = sizeOfNewStr; i < size; i++)
	{
		newStr[i] = s2[j];
		j++;
	}
	newStr[size + 1] = '\0';
	return (newStr);
}

