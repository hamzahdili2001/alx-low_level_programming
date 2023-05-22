


/**
 * _strpbrk - searches a string of a set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer to the bytes of s if it matched accept
*/

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (*s == '\0' || *accept == '\0')
		return ('\0');

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return ((char *) s);
			}
			temp++;
		}
		s++;
	}

	return ('\0');
}

