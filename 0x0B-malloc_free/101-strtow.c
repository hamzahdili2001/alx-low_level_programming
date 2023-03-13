#include <stdlib.h>
/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		/* Skip whitespace at the beginning of each word. */
		while (str[i] == ' ')
		i++;

		/*
		 * Count the current word if we've reached the
		 * end of the whitespace.
		*/
		if (str[i] != '\0')
		count++;

		/* Move to the end of the current word. */
		while (str[i] != ' ' && str[i] != '\0')
		i++;
	}

	return (count);
}
/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings, or NULL if an error occurs.
 */
char **strtow(char *str)
{
	int i, j, k, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	/* Allocate memory for the array of words. */
	words = malloc((count_words(str) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		/* Skip whitespace at the beginning of each word. */
		while (str[i] == ' ')
		i++;
		/* Build the current word. */
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;
		/* Allocate memory for the current word. */
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			/* Free memory for any words that have already been allocated.*/
			for (k = 0; k < j; k++)
			free(words[k]);
			free(words);
			return (NULL);
		}
		/* Copy the current word into the array. */
		for (k = 0; k < len; k++)
			words[j][k] = str[i + k];
		words[j][k] = '\0';
		/* Move to the next word. */
		i += len;
		j++;
	}
	/* Add the NULL terminator to the end of the array. */
	words[j] = NULL;
	return (words);
}

