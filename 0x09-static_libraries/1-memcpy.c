

/**
 * _memcpy - copy memory adress
 * @dest: destination
 * @src: source
 * @n: bytes of memory area
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

