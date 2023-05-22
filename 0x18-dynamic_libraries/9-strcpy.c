#include "main.h"
/**
 * _strcpy - copies a string from pointed value to aother
 * @src: the string given
 * @dest:the copied one
 * Return: Copyed string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = *(src + i);

	return (dest);
}

