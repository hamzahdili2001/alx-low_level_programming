#include <stddef.h>
#include <stdlib.h>
/**
 * getLengthForMe - man strlen
 * @str: stirng
 * Return: length of a string
*/

size_t getLengthForMe(char *str)
{
	size_t i = 0;

	while (*(str + i))
		i++;
	return (i);
}
/**
 *	copyStrForMe - man strncpy
 * @dest: destination
 * @src: source
 * @n: max chars to copy
 * Return: concatinated strings
*/
char *copyStrForMe(char *dest, const char *src, size_t n)
{
	char *ptr = dest;
	size_t i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr++ = *src++;
	}

	while (i < n)
	{
		i++;
	}
	return (dest);
}


/**
 * string_nconcat - result of a non discriptive task
 * @s1: string
 * @s2: also string
 * @n: a number of bytes I DONT KNOW that's what in the discriptive task
 * Return: string_nconcat like you said
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = getLengthForMe(s1), len2 = getLengthForMe(s2);
	char *myLove;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	if (n > len2)
	{
		n = len2;
	}
	myLove = malloc((len1 + n) + 1);

	if (myLove == NULL)
		return (NULL);

	copyStrForMe(myLove, s1, len1);
	copyStrForMe(myLove + len1, s2, n);
	myLove[len1 + n] = '\0';
	return (myLove);
}

