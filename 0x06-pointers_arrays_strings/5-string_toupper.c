#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @lower: the lower stirng given
 * Return: uppercase of lower
*/

char *string_toupper(char *lower)
{
	int i;

	while (*(lower + i) != '\n')
	{
		if (*(lower + i) >= 97 && *(lower + i) <= 122)
		{
			*(lower + i) = *(lower + i) - 32;
		}
		i++;
	}
	return (lower); /*Return lower as upper*/
}

