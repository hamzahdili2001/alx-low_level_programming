#include <stddef.h>
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
 * string_nconcat - result of a non discriptive task
 * @s1: string
 * @s2: also string
 * @n: a number of bytes I DONT KNOW that's what in the discriptive task
 * Return: string_nconcat like you said
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *myLove;

	len1 = getLengthForMe(s1);
	len2 = getLengthForMe(s2);

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

	for (i = 0; i < (len1 + n); i++)
		if (i < len1)
			myLove[i] = s1[i];
		else
			myLove[i] = s2[i - len1];
	myLove[i] = '\0';
	return (myLove);
}

