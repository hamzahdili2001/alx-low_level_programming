

/**
 * _strchr - finds matched char in string
 * @s: string
 * @c: character
 * Return: NULL or c
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while ((*s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}

