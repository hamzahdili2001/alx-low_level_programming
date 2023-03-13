#include <stdlib.h>

/**
 * getStrLen - gets the string length
 * @str: string given
 * Return: length of string
*/

int getStrLen(char *str)
{
	int length = 0;

	while (*(str + length))
		length++;

	return (length);

}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: length of arguments
 * @av: pointer to a pointer to the arguments
 * Return: a pointer to a new stirng or NULL
*/

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *_string;

	/*
	* [I, will, "show you", how, great, I, am]
	*/

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += getStrLen(av[i]) + 1;

	_string = malloc(sizeof(char) * len + 1);

	if (_string == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			_string[index] = av[i][j];
			index++;
		}
		_string[index] = '\n';
		index++;
	}
	_string[index] = '\0';

	return (_string);
}
