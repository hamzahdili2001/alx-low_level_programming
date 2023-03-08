
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
 * is_palindrome_helper - recursive helper function for is_palindrome
 * @s: the string to check
 * @start: the starting index of the current substring being checked
 * @end: the ending index of the current substring being checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}

