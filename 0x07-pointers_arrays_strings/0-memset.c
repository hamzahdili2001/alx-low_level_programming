#include <stdio.h>

/**
 * _memset - functions like memset
 * @s: string given
 * @b: buffer
 * @n: numbers of bytes
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
