
/**
 * _strlen - get length of string
 * @s: string
 * Return: length of s
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i, len = _strlen(s);

	if (len <= 1)
		return (1);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}

