
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
 * _strncat - function that concat two strings using n bytes form src
 * @n: the bytes
 * @dest:the string one
 * @src: the string two
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = _strlen(dest), i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + dest_length) = *(src + i);

		i++;
		dest_length++;
	}

	*(dest + dest_length) = '\0';

	return (dest);
}

