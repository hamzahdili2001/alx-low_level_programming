
/**
 * _strstr - finds needle in haystack
 * @needle: string
 * @haystack: string
 * Return: pointer to the beggining of the located substing or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0'
			&& *pneedle != '\0'
			&& *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}

