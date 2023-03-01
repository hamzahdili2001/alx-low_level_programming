/**
 * cap_string - capitalize
 * @str: string given.
 * Return: pointer/string capitalized.
 */


char *cap_string(char *str)
{
	int i, cap_next = 1, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			cap_next = 0;
		}
		else if (!cap_next && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
					|| str[i] == ',' || str[i] == ';' || str[i] == '.'
					|| str[i] == '!' || str[i] == '?' || str[i] == '"'
					|| str[i] == '(' || str[i] == ')' || str[i] == '{'
					|| str[i] == '}'))
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
	}

	return (str);
}
