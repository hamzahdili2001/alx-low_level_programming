/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: returns an integer indicating the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

