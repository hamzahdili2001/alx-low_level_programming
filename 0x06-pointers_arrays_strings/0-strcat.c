#include "main.h"
/**
 * _strlen - gets the length of string
 * @s: the string
 * Return: length
*/

int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}


/**
 * _strcat - concatenates two string
 * @dest: string one
 * @src: string two
 * Return: concatenated strings
*/

char *_strcat(char *dest, char *src)
{
	/* Get Length of dest */
	int dest_length = _strlen(dest), i = 0;

	/* concat src with dest */
	while (*(src + i) != '\0')
	{
		*(dest + dest_length) = *(src + i);

		i++;
		dest_length++;
	}
	*(dest + dest_length) = '\0';

	return (dest);

}

