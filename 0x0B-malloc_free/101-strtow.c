#include <stdlib.h>
/**
 * word_len - get the length of a word.
 * @str: string.
 *
 * Return: The length the str.
*/
int word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	return (len);
}

/**
 * count_words - Counts the words in str.
 * @str: string.
 *
 * Return: full count of str.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ' && str[i + 1] == ' ') ||
			(str[i] != ' ' && str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Split a string.
 * @str: string to split it.
 *
 * Return:a pointer to an array of strings if everything is okey.
 */
char **strtow(char *str)
{
	int i, j, k, n, words = 0;
	char **w_arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	w_arr = malloc(sizeof(char *) * (words + 1));
	if (w_arr == NULL)
		return (NULL);

	for (i = 0, k = 0; i < words; i++, k++)
	{
		while (str[k] == ' ')
			k++;

		n = word_len(&str[k]);

		w_arr[i] = malloc(sizeof(char) * (n + 1));

		if (w_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(w_arr[j]);
			}
			free(w_arr);
			return (NULL);
			}

			for (j = 0; j < n; j++)
				w_arr[i][j] = str[k++];

			w_arr[i][j] = '\0';
	}
	w_arr[i] = NULL;
	return (w_arr);
}
