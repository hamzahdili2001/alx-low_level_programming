#include <stdlib.h>
/**
 * is_space - checks if a given character is a space, tab or newline
 * @c: character
 * Return: true or false
*/
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
* count_words - counts the words of a string
* @str: string
* Return: count of that string
*/
int count_words(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			count++;
			while (!is_space(*str) && *str != '\0')
				str++;
		}
		str++;
	}

	return (count);
}
/**
 * word_length - count the length of string
 * @str: string
 * Return: length of string
*/
int word_length(char *str)
{
	int length = 0;

	while (!is_space(*str) && *str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * strtow - splits strings into words
 * @str: string
 * Return: splited stirngs
*/
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_words(str);
	words = malloc(sizeof(char *) * (n + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			words[i] = malloc(sizeof(char) * (word_length(str) + 1));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
					free(words);
					return (NULL);
			}
			k = 0;
			while (!is_space(*str) && *str != '\0')
			{
				words[i][k] = *str;
				k++;
				str++;
			}
			words[i][k] = '\0';
			i++;
		}
		else
			str++;
	}
	words[i] = NULL;
	return (words);
}

