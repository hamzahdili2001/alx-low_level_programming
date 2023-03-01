/**
 * string_toupper - convert string to uppercase
 * @lower: the lower stirng given
 * Return: uppercase of lower
*/

char *string_toupper(char *lower)
{
	int i = 0;

	while (*(lower + i))
	{
		if ((*(lower + i) >= 'a') && (*(lower + i) <= 'z'))
			*(lower + i) -= 32;
		i++;
	}

	return (lower);
}

