

/**
 * _strchr - finds matched char in string
 * @s: string
 * @c: character
 * Return: NULL or c
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return ('\0');
}

