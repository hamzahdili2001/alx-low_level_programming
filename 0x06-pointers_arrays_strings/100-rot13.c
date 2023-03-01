
/**
 * rot13 - rotate stirng by 13 places
 * @str: string given
 * Return: rot13
 */

char *rot13(char *str)
{
	int c = 0, i;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + c) == alph[i])
			{
				*(str + c) = rot[i];
				break;
			}
		}
		c++;
	}

	return (str);
}

