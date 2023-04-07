#include "main.h"
/**
 * binary_to_uint - convert bin to unsigned int
 * @b: string of bin
 * Return: 0 or the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{

		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) | (b[i] - '0');
			i++;
		}
		else
			return (0);
	}

	return (result);
}
