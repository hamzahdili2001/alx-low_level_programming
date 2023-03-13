#include <stdlib.h>


/**
 * _strdup - copy of the string given as a parameter
 * @str: String we need to copy
 *
 * Return: NULL if str = NULL or duplicated string or NULL
 * if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *newStr;
	unsigned int i;
	size_t strLength = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + strLength))
	{
		strLength++;
	}

	newStr = malloc((strLength + 1) * sizeof(str[0]));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < strLength; i++)
	{
		newStr[i] = str[i];
	}

	return (newStr);

}

