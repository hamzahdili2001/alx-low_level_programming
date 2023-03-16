#include <stdlib.h>
/**
 * getLengthForMe - man strlen
 * @str: stirng
 * Return: length of a string
*/
int getLengthForMe(char *str)
{
	int i = 0;

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
char *copyStrForMe(char *dest, const char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr++ = *src++;
	}

	while (i < n)
	{
		*ptr++ = '\0';
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
	unsigned int len1, len2;
	char *myLove;

	len1 = getLengthForMe(s1);
	len2 = getLengthForMe(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > len2)
	{
		n = len2;
	}
	myLove = malloc((len1 + n) + 1);

	if (myLove == NULL)
	{
		return (NULL);
	}

	copyStrForMe(myLove, s1, len1);
	copyStrForMe(myLove + len1, s2, n);
	myLove[len1 + n] = '\0';

	return (myLove);
}

