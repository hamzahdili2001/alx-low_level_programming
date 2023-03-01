#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @lower: the lower stirng given
 * Return: uppercase of lower
*/

char *string_toupper(char *lower)
{
	int i;

	i = 0;
	while (*(lower + i) != '\n')
	{
		if ((*(lower + i) >= 97) && (*(lower + i) <= 122))
			/* any lower ASCII value - 32 will be upper*/
			*(lower + i) = *(lower + i) - 32;
		i++;
	}
	*(lower + i) = '\n';
	return (lower); /*Return lower as upper*/
}

